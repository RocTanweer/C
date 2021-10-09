#include <stdio.h>

int main()
{
    // stores whole number
    // if floating point number is stored then dec part will be removed
    int a = 4;
    // stores floating number
    // if whole number is stored then .0 will be added
    float b = 8.5;
    char c = 'a';
    int d = 45;
    // %d -> whole number
    // %f -> floating number
    // %c -> char
    // type of variable in string must be type of second argument
    printf("The value of a is %d \n", a);
    printf("The value of b is %f \n", b);
    printf("The value of b is '%c' \n", c);
    printf("The sum of a and d is %d \n", a + d);

    // variables can be reassigned
    int num2 = 1;
    printf("%d\n", num2); // 1
    num2 = 2;
    printf("%d\n", num2); // 2
    return 0;
}