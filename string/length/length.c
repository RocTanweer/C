#include <stdio.h>

/*
    Things I learnt from this:
        If string of type char is passed in function which excepts pointer of type char, the pointer of
        the first string element is passed.
        Incrementing the pointer variable will give address of the next string element
*/

int find_len(char *p);

int main()
{
    char str[] = "The Quick Brown Fox Jumps Over The Lazy Dog";

    int len = find_len(str);
    printf("The length is: %d\n", len);

    return 0;
}

int find_len(char *p) // p = &str[0]
{
    unsigned int count = 0;
    while (*p != '\0') // until we find the terminator of string
    {
        count++;
        p++;
    }
    return count;
}