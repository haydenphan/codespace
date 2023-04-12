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
      for (int n=height-1; n>=0; n--)
      {
        char b = ' ';
        printf ("%c", b);
        for (int m=1; m<=height; m++)
        {
          char p = '#';
          printf ("%c", p++);
        }
        printf ("\n");
      }


        printf ("\n");
    
    return 0;
}