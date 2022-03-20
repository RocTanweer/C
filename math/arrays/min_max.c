#include <stdio.h>

void print_min(int array[]);
void print_max(int array[]);

const int length;

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

    print_min(array);
    printf("\n");
    print_max(array);
    printf("\n");

    return 0;
}

void print_min(int array[])
{
    int minimun; // will store minimun after each comparison

    for (int i = 0; i < length; i++)
    {
        // Assuming first element to be the minimum
        if (i == 0)
        {
            minimun = array[i];
        };
        if (array[i] < minimun)
        {
            minimun = array[i];
        }
    }
    printf("Minimum: %d", minimun);
}

void print_max(int array[])
{
    int maximum; // will store maximum after each comparison

    for (int i = 0; i < length; i++)
    {
        // Assuming first element to be the maximum
        if (i == 0)
        {
            maximum = array[i];
        };
        if (array[i] > maximum)
        {
            maximum = array[i];
        }
    }
    printf("Maximum: %d", maximum);
}
