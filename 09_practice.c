#include <stdio.h>

/**
 * Depending on compiler, variable can go from left to right or right to left
 * in printf function.
 * In GCC, it goes from right to left
 * But the value will be printed as it is put in printf functions
*/

// Q1) Find average of 3 numbers
// Q2) WAP to find nth fibonacci number
// 03) WAP to calculate sum of n natural numbers

// prototypes
float average(float x, float y, float z);

int nth_fib_num(int n);

int sum_n_numbers(int n);

// this function executes first
int main()
{
    // finding average of 3 numbers
    average(1, 2, 3);
    // NOTE Above
    int something = 0;
    printf("%d %d %d\n", something, ++something, something++);
    printf("%d \n", sum_n_numbers(5));
    return 0;
}

// function definitions
float average(float x, float y, float z)
{
    float result = (x + y + z) / 3;
    printf("The average of %f, %f and %f is %f\n", x, y, z, result);
    // finding nth fibonacci numbers
    printf("The 5th fibonacci is %d\n", nth_fib_num(5));
}

int nth_fib_num(int n)
{
    if (n == 2)
    {
        return 1;
    }
    if (n == 1)
    {
        return 0;
    }
    return nth_fib_num(n - 1) + nth_fib_num(n - 2);
}

int sum_n_numbers(int n)
{
    if (n == 1)
    {
        return n;
    }
    return n + sum_n_numbers(n - 1);
}