#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("The number of arguments are: %d\n", argc - 1);

    printf("first argument is: %s\n", argv[1]);
    return 0;
}