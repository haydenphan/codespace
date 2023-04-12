#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do {
        height = get_int ("Height: ");
    } while (height<1);
    for (int i=1; i<=height; i++)
    {
        for (int j=1; j<=i; j++)
        {
           char k = '#';
           printf ("%c\n",k);
        }

    }
    return 0;
}