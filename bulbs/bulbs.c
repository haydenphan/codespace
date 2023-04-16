#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

int convert (char a)
{
    int n = (int) a;
    int b[9];
    b[8] = NULL;
    for (int i = 7; i >= 0; i--)
    {
        if (n % 2 == 0)
        {
            b[i] = 0;
        }
        else
        {
            b[i] = 1;
        }
        n /= 2;
    }
    return b;
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}

int main(void)
{
    char a = 'a';
}


