#include <stdio.h>

// Later use dynamic array and skip asking for array length

int main()
{
    // getting the array length
    const int length;
    printf("Enter the length of the array: ");
    scanf("%d", &length);

    // making the array
    int array[length];

    // asking for the elements one by one
    for (int i = 0; i < length; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }

    // printing the values of the array

    printf("You array is: ");
    printf("[");
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", array[i]);
        if (i == length - 1)
        {
            printf("%d", array[i]);
        }
    }
    printf("]");
    return 0;
}