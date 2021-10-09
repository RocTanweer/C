#include <stdio.h>

/*
    Relational Operators : 
        "==", "!=", ">", "<", ">=", "<=" 

    In C, A non-zero value is considered to be true

    Logical Operators : 
        "&&", "||", "!"
    
        For && :
            Case1 => true && true -> true
            case2 => true && false -> false (same for false && true)
            case3 => false && false -> false

        For || :
            Case1 => true || true -> true
            case2 => true || false -> true (same for false || true)
            case3 => false || false -> false

        For ! :
            true == !false (same for false == !true)

    Ternary Operator : 
        (true) ? do something : do something else

    Switch-Case control instruction
        Switch(integer-expression) {
            case C1:
                code;
            case C2:
                code;
            where C1 and C2 -> constants
        }

    Operator Precedence : 
        "!" > "*, /, %" > "+, -" > "<, >, <=, >=" > "==, !=" > "&&" > "||" > "="
*/

int main()
{
    int age;
    printf("Enter your age \n");
    scanf("%d", &age);
    if (age >= 90)
    {
        printf("You are above 90, you cannot drive\n");
    }
    else
    {
        printf("You can drive\n");
    }

    if (age == 50)
    {
        printf("Half Century\n");
    }

    /*
        As the number of condition increases, the level of indentation increases.
        This reduces readability. Logical operators come to rescue in such cases.
    */

    // instead of
    if (age < 90)
    {
        if (age > 18)
        {
            printf("You are below 90 and above 18, you can drive\n");
        }
    }
    else
    {
        printf("You cannot drive\n");
    }

    // we do this
    if (age < 90 && age > 18)
    {
        printf("You are below 90 and above 18, you can drive\n");
    }
    else
    {
        printf("You cannot drive\n");
    }

    int num;
    printf("Enter your number\n");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("Your number is 1 \n");
    }
    else if (num == 2)
    {
        printf("Your number is 2 \n");
    }
    else if (num == 3)
    {
        printf("Your number is 3 \n");
    }
    else
    {
        printf("Your number is more than 3 or less than 1 \n");
    }

    // Switch-Case control instruction
    int rating;
    printf("Enter your rating (1-5)\n");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("Your raring is 1\n");
        break;
    case 2:
        printf("Your raring is 2\n");
        break;
    case 3:
        printf("Your raring is 3\n");
        break;
    case 4:
        printf("Your raring is 4\n");
        break;
    case 5:
        printf("Your raring is 5\n");
        break;
    default:
        printf("Invalid rating\n");
    }

    // To perform if-else in one line
    int num2;
    printf("Enter your number \n");
    scanf("%d", &num2);

    (num2 < 5) ? printf("Your number is less than 5 \n") : printf("Your number is more than 5 \n");

    return 0;
}