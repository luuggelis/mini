#include <stdio.h>
#include <string.h>

int main()
{
    char input[256];

    while (1)
    {        
        printf("mini> ");
        fgets(input, sizeof(input), stdin);

        if (strcmp(input, "exit"))
        {
            printf("goodbye!\n");
            break;
        }

        printf("you entered: %s", input);
    }

    return 0;
}

