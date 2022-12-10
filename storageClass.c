#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the list length: ");
    int size;
    scanf("%d", &size);
    printf("Size = %d\n", size);

    // int *p;

    // p = (int *)malloc(size * sizeof(int));

    int p[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &p[i]);
    }

    for (int j = 0; j < size; j++)
    {
        printf("%d ", p[j]);
    }

    return 0;
}