#include <ctype.h>
#include "../../lib/cs50.h"
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int score = 0;
    int word_len = strlen(word);
    // loop through the word
    for (int i = 0; i < word_len; i++)
    {
        // check if the current char is uppercase/lowercase/non-letter
        // for letter char, get it's value and add to the score var
        if (islower(word[i]))
        {
            int char_score = (int)word[i] - (int)'a'; // value range [0, 25]
            score += POINTS[char_score];
        }
        else if (isupper(word[i]))
        {
            int char_score = (int)word[i] - (int)'A'; // valur range [0, 25]
            score += POINTS[char_score];
        }
        else // for non-letter, add 0 to the scorea and move on
        {
            score += 0;
        }
    }

    // return the score after the loop ends
    return score;
}
