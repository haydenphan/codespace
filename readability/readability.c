#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Count the numbers of letter
int count_letters(string s)
{
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            count++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            count++;
        }
    }
    return count;
}

// Count the numbers of word
int count_words(string s)
{
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
        {
            count++;
        }
    }
    return count + 1;
}

// Count the numbers of sentence
int count_sentences(string s)
{
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            count++;
        }
    }
    return count;
}

double test(string s)
{
    double L = (double)(count_letters(s)) / (double)(count_words(s)) * 100.0;
    double S = (double)(count_sentences(s)) / (double)(count_words(s)) * 100.0;
    double index = 0.0588 * L - 0.296 * S - 15.8;
    return index;
}

int main(void)
{
    string s = get_string("Text: ");
    double grade = test(s);
    if (grade - (int)grade >= 0.5)
    {
        grade = (int)grade + 1.0;
    }
    else
    {
        grade = (int)grade;
    }
    if (grade > 1 && grade < 16.0)
    {
        printf("Grade %.0lf\n", grade);
    }
    else if (grade < 1.0)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade 16+\n");
    }
    return 0;
}