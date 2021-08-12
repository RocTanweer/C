#include <stdio.h>
#include <math.h>

int main()
{

    // Always observe the return value before assigning that
    int a = 4;
    int b = 8;

    printf("The value of a + b is : %d\n", a + b);
    printf("The value of a - b is : %d\n", a - b);
    printf("The value of a * b is : %d\n", a * b);

    int z;
    z = b * a;
    float c = 3;
    printf("value of c : %f\n", c);
    printf("The value of z is: %d\n", z);

    printf("5 when divided by 2 leaves a remainder of %d\n", 5 % 2);
    printf("-5 when divided by 2 leaves a remainder of %d\n", -5 % 2);
    printf("5 when divided by -2 leaves a remainder of %d\n", 5 % -2);

    // There is not operator to perfrom exponentiation in C
    // printf("The value of 4 ^ 5 is %d\n", 4^5); -> will not give 4 to the power 5

    // to Use expo. use pow()
    printf("The value of 4 ^ 5 is %f\n", pow(4, 5));

    // int + int => int
    printf("%d\n", 3 + 34);
    int k = 4.0 / 5;

    int l = 4.6 / 3;
    // int + float => float
    printf("%f\n", 3 + 6.5);
    printf("The value of c / b is : %f\n", c / b);
    printf("The value of 3.0 / 9 is : %f\n", 3.0 / 9);
    printf("The value of k is : %f\n", k);
    printf("The value of l is : %f\n", l);

    // float + flaot => float
    printf("%f\n", 1.2 + 4.5);

    return 0;
}