#include <stdio.h>

/*
    Loops are used to repeat similar part of a code snipper efficiently

    Type Of Loops :
        1) For Loop
        2) While Loop
        3) Do-While Loop

    Increment/Decrement Operators :
        1) i++/i-- -> gets the element and then inc/dec it 
        2) ++i/--i -> inc/dec the element, gets it and then returns it
    
    Compound Assignment operators :
        "+=", "-=", "*=", "/=" and "%="
*/

int main()
{
    // While Loop introduction
    int a;
    printf("Enter your number\n");
    scanf("%d", &a);
    while (a < 10)
    {
        printf("%d\n", a);
        a++;
    }

    /*
        Q)  Write a program to print natural number from 10 to 20 when 
            intial loop counter is initiated to 0.
    */
    int b = 0;
    while (b <= 20)
    {
        if (b == 0)
        {
            b += 9;
            printf("Number is %d\n", b + 1);
        }
        else
        {
            printf("Number is %d\n", b);
        }
        b++;
    }

    // Do-While Loop introduction

    int c = 0;
    do
    {
        printf("The value of c is %d\n", c);
        c++;
    } while (c < 10);

    /*
        Q) Write a program to print first n natural numbers
    */
    int d1;
    int d2 = 1;
    printf("Enter your number");
    scanf("%d", &d1);
    do
    {
        printf("natural num with do-while: %d\n", d2);
        d2++;
    } while (d2 <= d1);

    // For Loop introduction
    for (int a = 0; a < 10; a++)
    {
        printf("natural num with for while: %d\n", a);
    }

    /*
        Q) Write a program to print first n natural numbers
    */

    int e;
    printf("Enter your number");
    scanf("%d", &e);
    for (int a = 1; a <= e; a++)
    {
        printf("natural num with for while: %d\n", a);
    }

    /*
        Q) Write a program to print first n natural numbers in reverse
    */

    int f;
    printf("Enter your number");
    scanf("%d", &f);
    for (int a = f; a; a--)
    {
        printf("natural num with for while: %d\n", a);
    }
    return 0;
}