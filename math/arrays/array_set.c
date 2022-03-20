#include <stdio.h>

void print_array_set(int array[]);

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

    print_array_set(array);
    printf("\n");

    return 0;
}

void print_array_set(int array[])
{
    int tempLength = length;
    int found_duplicates = 0;

    for (int i = 0; i < tempLength; i++)
    {
        for (int j = i + 1; j < tempLength; j++)
        {
            if (array[i] == array[j])
            {
                for (int k = j; k < tempLength - 1; k++)
                {
                    array[k] = array[k + 1];
                }

                found_duplicates++;
                j--;
                tempLength--;
            }
        }
    }

    printf("Set of the array is: [");
    for (int i = 0; i < length - found_duplicates; i++)
    {
        if (i == (length - found_duplicates) - 1)
        {
            printf("%d]", array[i]);
        }
        else
        {
            printf("%d, ", array[i]);
        }
    }
}
