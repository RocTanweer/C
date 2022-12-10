#include <stdio.h>
#include <string.h>

int main()
{
    int a[] = {1, 3, 2};

    printf("%d\n", *(a + 1));
    char buf[100];
    char buf2[100];

    printf("Enter str 1: ");

    gets(buf);

    puts(buf);

    char *pointer = strrev(buf);
    printf("%s\n", pointer);

    // // printf("Enter str 2: ");

    // gets(buf2);

    // puts(buf2);

    // // // strdup(buf, buf3);

    // // char *p = strchr(buf, 'w');

    // // printf("%c\n", *p);
    // // printf("%d\n", p - buf);

    // int num = strcmp(buf, buf2);
    // printf("%d\n", num);

    // puts(buf);
    // puts(buf2);

    return 0;
}