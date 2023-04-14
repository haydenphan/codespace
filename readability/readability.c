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
    int L = 
}

int main(void)
{
    string s = get_string ("Text: ");
    printf ("%d letters\n", count_letters(s));
    printf ("%d words\n", count_words(s));
    printf ("%d sentences\n", count_sentences(s));
    return 0;
}