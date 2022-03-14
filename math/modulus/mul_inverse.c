#include <stdio.h>

int find_inverse(int number, int modulo);
int find_gcd(int a, int b); // a > b is assumed

int main()
{
    int number;
    int modulo;

    // taking the user inputs
    printf("Give me the multiplicative inverse of: ");
    scanf("%d", &number);

    printf("Under modulo: ");
    scanf("%d", &modulo);

    // to make sure GCD(number, modulo) is equal to 1
    if (find_gcd(number, modulo) != 1)
    {
        printf("No multiplicative inverse of %d under %d\n", number, modulo);
        printf("mul_inverse: GCD(%d,%d) is not unity\n", number, modulo);
        return 1;
    }

    int inverse = find_inverse(number, modulo);

    printf("The inverse of %d under modulo %d is %d", number, modulo, inverse);

    return 0;
}

int find_inverse(int number, int modulo)
{
    for (int i = 0; i < modulo; i++)
    {
        // we need to multiply current loop number(i) with number
        // And check if their product is congruent to 1 , i.e, remainder is 1 when product is divided by modulo
        if ((number * i) % modulo == 1) // number * i === 1 (mod modulo)
        {
            return i;
        }
    }
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