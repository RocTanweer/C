#include <stdio.h>

int main()
{
    /*
     Q1) write a program to print multiplication table of a given number n.  
    */
    int a;
    printf("Calculate multiplication table of number n\n");
    scanf("%d", &a);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", a, i, a * i);
    }

    /*
     Q2) write a program to print multiplication table of number n in reverse order.  
    */
    int b;
    printf("Calculate reverse multiplication table of number n: \n");
    scanf("%d", &b);
    for (int i = 10; i > 0; i--)
    {
        printf("%d X %d = %d\n", b, i, b * i);
    }

    /*
     Q3) write a program to sum first n natural numbers using  loop.
    */

    // using while loop
    int c, sum = 0, i = 1;
    printf("Sum of first n Natural numbers : \n");
    scanf("%d", &c);

    while (i <= c)
    {
        sum += i;
        i++;
    }
    printf("Sum of first %d numbers is %d: \n", c, sum);

    // using do-while loop
    int d, sum_of_n = 0, i = 1;
    printf("Sum of first n Natural numbers: \n");
    scanf("%d", &d);

    do
    {
        sum_of_n += i;
        i++;
    } while (i <= d);
    printf("Sum of first %d numbers is %d: \n", d, sum_of_n);

    // using for loop
    int f, sum = 0;
    printf("Sum of first n Natural numbers: \n");
    scanf("%d", &f);

    for (int i = 1; i <= f; i++)
    {
        sum += i;
    }
    printf("Sum of first %d numbers is %d: \n", f, sum);

    /*
       Q4) write a program to calculate the sum of the numbers occuring in the
        multiplication table of number n.
    */
    int g, sum = 0;
    printf("Calculate sum of products of the multiplication table of a number : \n");
    scanf("%d", &g);

    for (int i = 1; i <= 10; i++)
    {
        sum += i * g;
    }
    printf("Sum of numbers in table is %d numbers is %d: \n", g, sum);

    /*
       Q5) write a program to calculate the factorial of a given number using
        for loop
    */

    // using for-loop
    int h, factorial = 1;
    printf("Find Factorial of a number : \n");
    scanf("%d", &h);

    for (int i = 0; i < h; i++)
    {
        factorial *= h - i;
    }
    printf("factorial of %d is %d: \n", h, factorial);

    // using while loop
    int i, fact = 1, counter = 0;
    printf("Find Factorial of a number: \n");
    scanf("%d", &i);
    while (counter < i)
    {
        fact *= i - counter;
        counter++;
    }
    printf("factorial of %d is %d: \n", i, fact);

    /*
        Q6) write a program to check whether a num is a prime using loop.
    */

    // using for loop
    int j;
    printf("Check for prime number(prime number if nothing prints): \n");
    scanf("%d", &j);

    for (int counter = 1; counter <= j; counter++)
    {
        if (counter != 1 && counter != j && j % counter == 0)
        {
            printf("Your number %d is not a prime number\n", j);
        }
        counter++;
    }

    // using while loop

    int k, count_for_rem = 0, counter = 1;
    printf("Check for prime number : \n");
    scanf("%d", &k);
    while (counter <= k)
    {
        if (counter != 1 && counter != k & k % counter != 0)
        {
            count_for_rem++;
            counter++;
        }
        else
        {
            counter++;
        }
    }
    if (count_for_rem == k - 2)
    {
        printf("Your number %d is a prime number\n", k);
    }
    else
    {
        printf("Your number %d is not a prime number\n", k);
    }

    return 0;
}