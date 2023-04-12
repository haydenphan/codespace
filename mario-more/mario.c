#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do {
        height = get_int ("Height: ");
    } while (height<1);
   /* for (int i=1; i<=height; i++)
    {
        for (int j=height; j>=1; j--)
        {
           char k = '#';
           char p = '#';
           printf ("%c",k++);
           */
      for (int n=height-1; n>=0)


        printf ("\n");
    }
    return 0;
}