#include <stdio.h>
#include <stdlib.h>

void print_sum(int *arr);
void print_average();

// global var
int counter;
const int length;
int sum;
int *arr;

int main()
{
    // getting the array length
    printf("Enter the length of the array: ");
    scanf("%d", &length);

    // making the array
    // int array[length];

    arr = (int *)malloc(length * sizeof(int));

    // asking for the elements one by one
    for (int i = 0; i < length; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", arr + i);
    };

    print_sum(arr);
    printf("\n");
    print_average();
    printf("\n");

    free(arr);

    return 0;
}

void print_sum(int *arr)
{
    sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += *(arr + i);
    }
    printf("Sum: %d", sum);
}

void print_average()
{
    printf("Average: %.2f", (float)sum / length);
}
