#include <stdio.h>

// Q1) Find average of 3 numbers
// Q2) WAP to find nth fibonacci number

// prototypes
float average(float x, float y, float z);

int nth_fib_num(int n);

// this function executes first
int main()
{
    // finding average of 3 numbers
    average(1, 2, 3);
    return 0;
}

// function definitions
float average(float x, float y, float z)
{
    float result = (x + y + z) / 3;
    printf("The average of %f, %f and %f is %f\n", x, y, z, result);
    // finding nth fibonacci numbers
    printf("The 5th fibonacci is %d", nth_fib_num(5));
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
