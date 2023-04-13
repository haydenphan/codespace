#include <cs50.h>
#include <stdio.h>
#include <string.h>

int check (char a[])
{
    int n = strlen (a);
    string b[n/2];
    string c[n-n/2];
    if (n % 2 == 0)
    {
        for (int i=0; i<n; i+=2)
        {
            for (int j=0; j<n/2; j++)
            {
                b[j] = a[i] * 2;
            }
            for (int k=0; k<n-n/2; k++)
            {
                c[k] = a[i+1];
            }
        }
        /*
        for (int i=0, int j=0, int k=0; i<n, j<n/2, k<n-n/2; i+=2, j++, k++)
        {
            b[j] = a[i] * 2;
            c[k] = a[i+1];
        } */
        
    }
    else
    {
        for (int i=1, int j=0; i<n, j<n/2; i+=2, j++)
        {
            b[j] = a[i] * 2;
        }
    }
    int sum = 0;
    for (int k=0; k<n/2; k++)
    {
        sum += b[k];
    }
    int sum2 = sum;

}

int main(void)
{

}