#include <stdio.h>
#include <stdlib.h>

int find_gcd(int a, int b);
void swap(int *x, int *y);
int is_all_num(int count, char *argv[]);

int main(int argc, char *argv[])
{

    // In case there is no user input
    if (argc < 2)
    {
        printf("gcd: missing interger numbers\n");
        printf("try ./gcd [...integers]\n");
        return 1;
    }

    // In case there is atleast one invalid number
    if (!is_all_num(argc, argv))
    {
        printf("gcd: invalid input\n");
        printf("try: ./gcd [...integers]\n");
    }

    // taking the first input
    int gcd = atoi(argv[1]);

    // In case there is just one input
    if (argc == 2)
    {
        printf("gcd is : %d\n", gcd);
        return 0;
    }

    // looping from index 2 because element at index 1 is stored in gcd var
    for (int i = 2; i < argc; i++)
    {
        // taking current element at index i
        int a = atoi(argv[i]);
        // checking if the current element is greater than GCD of previous values (gcd var)
        if (gcd < a)
        {
            // to make sure to put gcd and a in find_gcd : gcd > a
            swap(&gcd, &a);
        }
        gcd = find_gcd(gcd, a);
    }

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

/**
 * @param {integer} x - pointer to a variable of type int
 * @param {integer} y - pointer to a variable of type int
 * @return {void}
 */
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/**
 * @param {integer} count - the length of the array - argv
 * @param {array} argv - array of variable length of type char
 * @return {int} - It returns 0 if true or 1 if false
 */
int is_all_num(int count, char *argv[])
{
    for (int i = 1; i < count; i++)
    {
        if (atoi(argv[i]) == 0)
        {
            return 0;
        }
    }
    return 1;
}