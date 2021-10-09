#include <stdio.h>

int main()
{
    int x = 2;
    int y = 3;

    // <----------------operator precedence----------->
    // operator of higher priority are evaluated first in absence of ()
    // "*", "/" , "%" > "+", "-" > "="
    printf("The value of 3*x - 8*y is %d \n", 3 * x - 8 * y);
    //  When operators of equal priority are present in an expression,
    // the tie is taken care of by associativity,  expression is evaluated from left to right
    printf("The value of 3*x / 8*y following associativity is %d \n", 8 * y / 3 * x);
    // expression inside () will be evaluated first
    printf("The value of 3*x / 8*y controlled by () is %d \n", (8 * y) / (3 * x));
    return 0;
}