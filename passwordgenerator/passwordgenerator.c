#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void copy_to_clipboard(const char *text){

        FILE *tmp = tmpfile();
        if(!tmp){
                perror("tmpfile");
                return;
        }

        fprintf(tmp, "%s", text);
        rewind(tmp);

        FILE *pipe = popen("wl-copy -n", "w");
        if(!pipe){
                perror("popen");
                fclose(tmp);
                return;
        }

        char buffer[4096];
        size_t bytes;
        while ((bytes = fread(buffer, 1, sizeof(buffer), tmp)) > 0){
                fwrite(buffer, 1, bytes, pipe);
        }

        pclose(pipe);
        fclose(tmp);

}


int main()
{

        srand(time(NULL));

        char password[15];
        char (*pPassword)[15] = &password;
        password[14] = 0;

        for(int r = 0; r != 14; r++){
                password[r] = rand() % (126 - 33 + 1) + 33;
        }

        copy_to_clipboard(password); 
        printf("%s\n", password);
        printf("password copied to clipboard.\n");

        return 0;

}
