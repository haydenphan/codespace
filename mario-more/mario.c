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
        char j = '#';
        printf ("%c  %c\n", j,j);
    }
    return 0;
}