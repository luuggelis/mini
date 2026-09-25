#include <stdio.h>

int main()
{
    char input[256];

    while (1)
    {        
        printf("mini> ");
        fgets(input, sizeof(input), stdin);

        printf("you entered: %s", input);
    }

    return 0;
}

