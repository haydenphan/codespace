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
       /* for (int j=height; j>=1; j--)
        {
           char k = '#';
           char p = '#';
           printf ("%c",k++);
           */

          for (int j=height-1; j>=0; j--) {
            char a = ' ';
            printf ("%c", a--);
          }
            char b = '#';
            printf ("%c", b++);

        
        printf ("\n");
    }
    return 0;
}