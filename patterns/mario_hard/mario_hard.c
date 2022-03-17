#include "../../lib/cs50.h"
#include <stdio.h>

void make_pyramid(int num_of_rows, int space_count);

int main(void)
{
    int Height;
    // Keep asking user for the input until it matches the condition
    do
    {
        Height = get_int("Height: ");
    } while (Height < 1 || Height > 8); // => condition

    /**
     * Prints a full volcano mountain
     * @param {int} Height - number of rows which determines the height of it
     * @param {const} 0 - Number of spaces in each row, zero since bottom row contains 0 spaces
     */
    make_pyramid(Height, 0);
}

void make_pyramid(int num_of_rows, int space_count)
{
    // condition(s) to stop the recursion
    if (num_of_rows <= 0)
    {
        return;
    }

    // calling the function again with different argument
    make_pyramid(num_of_rows - 1, space_count + 1);

    // printing current row
    for (int j = 0; j < space_count; j++)
    {
        printf(" ");
    }

    for (int i = 0; i < num_of_rows; i++)
    {
        printf("#");
    }
    printf(" ");
    for (int i = 0; i < num_of_rows; i++)
    {
        printf("#");
    }
    printf("\n");
}