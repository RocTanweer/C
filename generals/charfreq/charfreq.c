#include <stdio.h>
#include <string.h>

void assignValue();
void incrementCount(char c);

typedef struct Chars
{
    char name;
    int count;
} Char;

// global var
Char characters[52];

int main(int argc, char *argv[])
{
    assignValue();

    // for (int l = 0; l < 52; l++)
    // {
    //     printf("%c ", characters[l].name);
    //     printf("%d ", characters[l].count);
    //     printf("\n");
    // }

    // for (int j = 1; j < argc; j++)
    // {
    //     int len = strlen(argv[j]);
    //     for (int k = 0; k < len; k++)
    //     {
    //         incrementCount(argv[j][k]);
    //     }
    // }

    // for (int l = 0; l < 52; l++)
    // {
    //     printf("%c ", characters[l].name);
    //     printf("%d ", characters[l].count);
    //     printf("\n");
    // }

    return 0;
}

void assignValue()
{ // Assigning the values
    for (int i = 0; i < 52; i++)
    {
        if (i < 26)
        {
            characters[i].name = (char)('A' + i);
            characters[i].count = 0;
        }
        else
        {
            characters[i].name = (char)('A' + i + 6);
            characters[i].count = 0;
        }
        printf("%c ", characters[i].name);
        printf("%i", characters[i].count);
        printf("\n");
    }
}

void incrementCount(char c)
{
    for (int i = 0; i < 52; i++)
    {
        if (characters[i].name == c)
        {
            characters[i].count++;
        }
    }
}