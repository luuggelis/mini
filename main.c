#include <stdio.h>

int main()
{
    char input[256];

    printf("mini> ");
    fgets(input, sizeof(input), stdin);

    printf("you entered: %s", input);

    return 0;
}

