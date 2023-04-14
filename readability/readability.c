#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_letters (string s)
{
    int count = 0;
    for (int i=0; i<strlen(s); i++)
    {
        toupper (s[i]);
        if (s[i]>='A' && s[i]<='Z')
        {
            count++;
        }
    }
    return count;
}

int main(void)
{

}