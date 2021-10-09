#include <stdio.h>

int main()
{
    /*
        Q1) What will be the output of this program?
            int a = 10;
            if(a = 11){
                printf("I am 11\n")
            }
            else{
                printf("I am not 11\n")
            }
        
        Answer : I am 11
    */

    /*
        Q2) Write a program to find out whether a student is pass or fail,
            if it requires total 40% and atleast 33% in each subject to pass.
            Assume 3 subjects and take marks as an input from the user.
    */

    int sub1, sub2, sub3; // assuming all the marks are in whole number
    printf("Please Enter sub1 mark\n");
    scanf("%d", &sub1);
    printf("You entered %d\n", sub1);
    printf("Please Enter sub2 mark\n");
    scanf("%d", &sub2);
    printf("You entered %d\n", sub2);
    printf("Please Enter sub3 mark\n");
    scanf("%d", &sub3);
    printf("You entered %d\n", sub3);

    float totalPer = (sub1 + sub2 + sub3) / 300.0 * 100;
    printf("total:%f\n", totalPer);
    if (totalPer >= 40 && sub1 >= 33 && sub2 >= 33 && sub3 >= 33)
    {
        printf("You are passed!\n");
    }
    else
    {
        printf("You are failed...\n");
    }

    /*
        Q3) Calculate Income tax paid by an employee to the gov as per the 
            slab mentioned below

            Income Slab    Tax
            2.5L - 5.0L     5%
            5.0L - 10.0L    20%
            > 10.0L         30%
        RULES : income PA <= 2.5L -> no tax
                income PA <= 5.0L -> tax on next 2.5L
                income PA <= 10.0L -> tax on next 5.0L
                income PA >= 10.0L -> tax on next x.0L
            Tax to be paid is net of all the above taxes
    */

    float income, tax = 0.0;
    printf("Please Enter your annual income...\n");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }
    if (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }

    printf("Amount of tax you are required to pay is : %f\n", tax);

    return 0;
}