#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../../lib/cs50.h"

int is_pangram(string text);

int pos_value[26];

int main()
{
    string userInput = get_string("Enter the text: ");

    // bool value = is_pangram("The five boxer wizards jump quickly.");
    int value = is_pangram(userInput);
    if (value)
    {
        printf("pangram!\n");
    }
    else
    {
        printf("not pangram!\n");
    }
    return 0;
}

int is_pangram(string text)
{
    //  <----  hajime!

    int len = strlen(text);

    for (int i = 0; i < len; i++)
    {
        char current_value = text[i];
        if (isupper(current_value))
        {
            int pos = current_value - 'A';
            pos_value[pos] = 1;
        }
        if (islower(current_value))
        {
            int pos = current_value - 'a';
            pos_value[pos] = 1;
        }
    }

    for (int j = 0; j < 26; j++)
    {
        if (pos_value[j] != 1)
        {
            return 0;
        }
    }

    return 1;
}