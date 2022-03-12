#include <stdio.h>

int find_gcd(int a, int b);

int main()
{
    int gcd = find_gcd(49, 35);
    printf("gcd is : %d\n", gcd);
    return 0;
}

/**
 * @param {integer} a - This is the dividend
 * @param {integer} b - This is the divisor
 * @return {integer} GCD of a and b
 */
int find_gcd(int a, int b) // a > b is assumed
{
    if (a % b == 0) // when the remainder is zero, then GCD will be the current quotient/ previous remainder
    {
        return b;
    }
    // Finding GCD of a and b is like finding GCD of a % b(remainder when a is divided by b) and b(previous divisor)
    find_gcd(b, a % b);
}