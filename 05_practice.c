#include <stdio.h>

int main()
{
    /*
        Q1) Which of the following is invalid in C?
        1) int a; b = a;
        2) int v = 4^4;
        3) char dt = '21 Dec 2020'; 
    */
    int a = 1;       //b=2;  // throws error - invalid
    int v = 3 ^ 3;   // no error - valid
    char dt = '21 '; // invalid
                     // CONCLUSION -> if an expression/statement is not throwing any error, then it is valid in C

    /*
        Q2) What data type will 3.0 / 8 - 2 return?
        1) int
        2) float
        3) double
        ans => if double is in option, then double else float
    */
    // CONCLUSION -> double has 2x more precision then float

    /*
        Q3) Write a program to check whether a number is divisible by 97 or not.
    */
    printf("Enter the number\n");
    int num;
    scanf("%d", &num);
    // printf("Divisibility test return : %d\n", num % 97);

    /*
        Q4) Explain step by step evaluation of 3 * x / y - z + k 
        where x = 2, y = 3, z = 3, k = 1
    */
    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;
    // 3 * 2 / 3 - 3 + 1
    // 6 / 3 - 3 + 1
    // 2 - 3 + 1
    // 0
    // printf("The value of result is : %d\n", result);
    return 0;
}