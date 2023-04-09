#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// The point values of each letter of the alphabet
const int POINTS[] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };

// Function prototypes
int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
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
    int score = 0;

    // Calculate score for each letter in the word
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        // Convert letter to uppercase for indexing into POINTS
        int letter = toupper(word[i]);

        // Ignore non-alphabetic characters
        if (!isalpha(letter))
        {
            continue;
        }

        // Calculate score for letter and add to total score
        score += POINTS[letter - 'A'];
    }

    return score;
}
