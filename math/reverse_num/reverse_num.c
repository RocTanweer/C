#include <stdio.h>
#include <math.h>

int reverse_num(int num);

int main()
{
    int number;

    printf("Enter your number: ");
    scanf("%d", &number);

    int reversed = reverse_num(number);

    printf("reversed number is: %d\n", reversed);

    return 0;
}

int reverse_num(int num)
{
    int reversed = 0;
    // will eventually become 0 as we will apply re-assign with division
    while (num != 0)
    {
        // to get the last digit
        int rem = num % 10;
        // main part of this algorithm
        reversed = reversed * 10 + rem;
        // removing last digit from the num on each iteration
        num /= 10;
    }
    return reversed;
}