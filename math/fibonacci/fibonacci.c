#include <stdio.h>

int fib(int num);

int main()
{
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
    int number;
    printf("Enter the nubmer: ");
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        printf("%d ", fib(i));
    }

    printf("\n");

    return 0;
}

int fib(int num)
{
    if (num == 1)
    {
        return 1;
    }
    if (num == 0)
    {
        return 0;
    }

    return (fib(num - 1) + fib(num - 2));
}