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
        for (int j=i; j>=1; j--)
        {  /*
           char k = '#';
           char p = '#';
           printf ("%c",k++);
           */
          for (int )
          char m = '';
          char p = '#';
          printf ("%c",m--);
          printf ("%c",p++);
        }
        printf ("\n");
    }
    return 0;
}