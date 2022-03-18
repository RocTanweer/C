#include <stdio.h>

// Later use dynamic array and skip asking for array length

void print_evens(int array[]);
void print_odds(int array[]);
void print_sum(int array[]);
void print_average(int array[]);

// global var
int counter;
const int length;
int sum;

int main()
{
    // getting the array length
    printf("Enter the length of the array: ");
    scanf("%d", &length);

    // making the array
    int array[length];

    // asking for the elements one by one
    for (int i = 0; i < length; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    };

    // printing even-valued elements of the array
    print_evens(array);
    // printing odd-valued elements of the array
    printf("\n");
    print_odds(array);
    printf("\n");
    print_sum(array);
    printf("\n");
    print_average(array);
    return 0;
}

void print_evens(int array[])
{
    counter = 0;
    printf("Even values are:");
    for (int i = 0; i < length; i++)
    {
        if (array[i] % 2 == 0)
        {
            printf(" %d", array[i]);
            counter++;
        }
    }
    if (counter == 0)
    {
        printf(" Zero");
    }
}
void print_odds(int array[])
{
    counter = 0;
    printf("Odd values are:");
    for (int i = 0; i < length; i++)
    {
        if (array[i] % 2 != 0)
        {
            printf(" %d", array[i]);
            counter++;
        }
    }
    if (counter == 0)
    {
        printf(" Zero");
    }
}

void print_sum(int array[])
{
    sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    printf("Sum: %d", sum);
}

void print_average(int array[])
{
    printf("Average: %f", (float)sum / length);
}
