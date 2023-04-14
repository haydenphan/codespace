#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_letters (string s)
{
    int count = 0;
    for (int i=0; i<strlen(s); i++)
    {
        if (s[i]>='A' && s[i]<='Z')
        {
            count++;
        }
        else if (s[i]>='a' && s[i]<='z')
        {
            count++;
        }
    }
    return count;
}

int count_words (string s)
{
    int count = 0;
    for (int i=0; i<strlen(s); i++)
    {
        if (s[i]==' ' && s[i+1] != ' ')
        {
            count++;
        }
    }
    return count+1;
}

int count_sentences (string s)
{
    int count = 0;
    for (int i=0; i<strlen(s); i++)
    {
        if (s[i]=='.' || s[i] == '!' || s[i] == '?')
        {
            count++;
        }
    }
    return count;
}

int test (string s)
{
    double L = (double) (count_letters(s)) / (double) (count_words(s)) * 100.0;
    double S = (double) (count_sentences(s)) / (double) (count_words(s)) * 100.0;
    int index = (int) (0.0588 * L - 0.296 * S - 15.8);
    return index;
}

int main(void)
{
    string s = get_string ("Text: ");
    printf ("%d letters\n", count_letters(s));
    printf ("%d words\n", count_words(s));
    printf ("%d sentences\n", count_sentences(s));
    printf ("%d\n", test(s));
    return 0;
}