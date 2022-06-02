#include <stdio.h>

#define NUM_OF_ELEMENTS 2

int *mergeSort(int arr[], int arrLen);

int sortedArry[NUM_OF_ELEMENTS];

int main()
{
    // init array of 10 integers randomly ordered
    int numbers[NUM_OF_ELEMENTS];

    for (int i = 0; i < NUM_OF_ELEMENTS; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &numbers[i]);
    }

    int *ptr;

    ptr = mergeSort(numbers, NUM_OF_ELEMENTS);

    // printf("Final sorted Array: \n");
    // for (int i = 0; i < NUM_OF_ELEMENTS; i++)
    // {
    //     printf("%d, ", *(ptr + i));
    // }

    return 0;
}

int *mergeSort(int arr[], int arrLen)
{
    // base condition
    if (arrLen == 1)
    {
        return &arr[0];
    }

    int middleMan = arrLen / 2;
    int leftSlice[middleMan];
    int rightSlice[middleMan];

    for (int i = 0; i < middleMan; i++)
    {
        leftSlice[i] = arr[i];
    }

    for (int j = 0, k = middleMan; k < NUM_OF_ELEMENTS, j < middleMan; j++, k++)
    {
        rightSlice[j] = arr[k];
    }

    int *leftSlicePtr = mergeSort(leftSlice, middleMan);
    int *rightSlicePtr = mergeSort(rightSlice, middleMan);

    int tempArray[arrLen];

    for (int i = 0; i < arrLen; i++)
    {
        int leftCounter = 0;
        int rightCounter = 0;
        if (leftCounter == middleMan - 1)
        {
            for (int j = rightCounter; j < middleMan; j++)
            {
                tempArray[i] = *(rightSlicePtr + j);
                i++;
            }
        }

        if (rightCounter == middleMan - 1)
        {
            for (int j = leftCounter; j < middleMan; j++)
            {
                tempArray[i] = *(leftSlicePtr + j);
                i++;
            }
        }
        if (*(leftSlicePtr + leftCounter) > *(rightSlicePtr + rightCounter))
        {
            tempArray[i] = *(rightSlicePtr + rightCounter);
            rightCounter++;
        }

        if (*(leftSlicePtr + leftCounter) < *(rightSlicePtr + rightCounter))
        {
            tempArray[i] = *(leftSlicePtr + leftCounter);
            leftCounter++;
        }
    }

    for (int i = 0; i < arrLen; i++)
    {
        printf("%d\n", tempArray[i]);
    }

    // printf("leftSlice first element = %d\n", *leftSlicePtr);
    // printf("rightSlice first element = %d\n", *rightSlicePtr);

    // Now we will compare and merge them.

    // printf("leftSlice: ");
    // for (int n = 0; n < middleMan; n++)
    // {
    //     printf("%d ", leftSlice[n]);
    // }

    // printf("rightSlice: ");
    // for (int n = 0; n < middleMan; n++)
    // {
    //     printf("%d ", rightSlice[n]);
    // }

    // [2, 4, 1, 3]
    // 1st half => [2, 4]
    //  1st half => [2] // since length == 1, array is sorted!
    //  2nd half => [4] // same here
    // merging => [2, 4]

    // 2nd hald => [1, 3]
    //  1st half => [1] // since length == 1, array is sorted!
    //  2nd half => [3] // same here
    // merging => [1, 3]

    // merging => [1, 2, 3, 4]

    // if array length is 1, this implies array is sorted. (base case)

    // leftHalfmergedArray
    // rightHalfmergedArray
    // create array equal to both of their length
    // merge them
    // return merged array
}
