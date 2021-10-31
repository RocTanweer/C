#include <stdio.h>

// IMPORTANT NOTES
/**
 * Recursion is sometimes the most direct way to code an algorithm.
 * The condition which terminates the recursion is called "Base Condition"
 * Sometimes, due to mistake made, a recursion function can keep running without returning resulting in a "Memory Error"
*/

// defining function prototypes
int factorial(int x);

int main()
{
    int inp;
    printf("Enter your number\n");
    scanf("%d", &inp);
    printf("factorial of num %d is %d", inp, factorial(inp));
    return 0;
}

int factorial(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}