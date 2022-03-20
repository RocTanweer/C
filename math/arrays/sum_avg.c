#include <stdio.h>

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

    print_sum(array);
    printf("\n");
    print_average(array);
    printf("\n");

    return 0;
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
    printf("Average: %.2f", (float)sum / length);
}
