#include <stdio.h>
void print_array_reversed(int array[]);

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

    print_array_reversed(array);
    printf("\n");
    return 0;
}

void print_array_reversed(int array[])
{
    int halfLength = length / 2;
    for (int i = 0; i < halfLength; i++)
    {
        int temp;
        temp = array[i];
        array[i] = array[length - (i + 1)];
        array[length - (i + 1)] = temp;
    };

    printf("Reverse of the array is: [");

    for (int i = 0; i < length; i++)
    {
        if (i == (length)-1)
        {
            printf("%d]", array[i]);
        }
        else
        {
            printf("%d, ", array[i]);
        }
    }
}