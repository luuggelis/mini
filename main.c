#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

// testest

int main()
{
    char input[256];

    while (1)
    {
        printf("mini> ");
        fgets(input, sizeof(input), stdin);

        if (strcmp(input, "exit\n") == 0)
        {
            break;
        }

        __pid_t pid = fork();

        if (pid == 0)
        {
            input[strcspn(input, "\n")] = '\0';

            char *args[16];
            int i = 0;

            char *token = strtok(input, " ");

            while (token != NULL && i < 15)
            {
                args[i] = token;
                i++;

                token = strtok(NULL, " ");
            }

            args[i] = NULL;

            execvp(args[0], args);

            printf("NaC\n");
            return 1;
        }
        else 
        {
            wait(NULL);
        }
    }

    return 0;
}

