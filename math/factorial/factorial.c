#include <stdio.h>

int fact(int num);

int main()
{
    int input;
    printf("Enter your number: ");
    scanf("%d", &input);

    if (input < 0)
    {
        printf("Invalid number!\n");
        printf("factorial: n >= 0\n");
        return 1;
    }

    for (int i = 0; i < input; i++)
    {
        printf("%d ", fact(i));
    }

    return 0;
}

int fact(int num)
{
    if (num == 0)
    {
        return 1;
    }
    return num * fact(num - 1);
}