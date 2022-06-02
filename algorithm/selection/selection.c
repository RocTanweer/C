#include <stdio.h>

#define NUM_OF_ELEMENTS 10

void selectionSort(int arr[]);
void swap(int *a, int *b);

int main()
{
    // init array of 10 integers randomly ordered
    int numbers[NUM_OF_ELEMENTS];

    for (int i = 0; i < NUM_OF_ELEMENTS; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &numbers[i]);
    }

    selectionSort(numbers);

    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", numbers[i]);
    }

    return 0;
}

void selectionSort(int arr[])
{
    for (int i = 0; i < NUM_OF_ELEMENTS - 1; i++)
    {
        for (int j = i + 1; j < NUM_OF_ELEMENTS; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}