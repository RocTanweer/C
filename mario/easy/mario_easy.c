#include "../../lib/cs50.h"
#include <stdio.h>

int main(void)
{
    int Height;

    // Keep asking user for the input until it matches the condition
    do
    {
        Height = get_int("Height: ");
    } while (Height < 1 || Height > 8);

    // Looping through 0 to Height twice, for rows and it's corresponding columns
    for (int i = 0; i < Height; i++) // for rows
    {
        for (int j = 0; j < Height - (i + 1); j++) // for ' ' part of column
        {
            printf(" ");
        }
        for (int k = 0; k < (i + 1); k++) // for '#' part of column
        {
            printf("#");
        }
        printf("\n");
    }
}
