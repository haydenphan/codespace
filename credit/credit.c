#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Check whether the numbers are credit card or not
int check (char a[])
{
        int n = strlen (a);
        char b[n/2];
        char c[n-n/2];
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
         }
         else
         {
            for (int i=1; i<n; i+=2)
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
         }
         int sum = 0;
         for (int k=0; k<n/2; k++)
         {
            sum += b[k];
         }
         int sum2 = sum;
         for (int i=0; i<n-n/2; i++)
         {
            sum2 += c[i];
         }
         if (sum2 % 10 == 0)
         {
            return 1;
         }
         else
         {
            return 0;
         }
}

int amex (char a[])
{
    if (a[0] != '3')
    {
        return 0;
    }
    else
    {
        if (a[1] != '4' && a[1] != '7')
        {
            return 0;
        }
        else
        {
            return 1;
            /*
            if (check(a) == 1)
            {
                return 1;
            }
            else
            {
                return 0;
            } */
        }
     }
}



int mastercard (char a[])
{
    if (a[0] != '5' || a[1] < 1 || a[1] > 5)
    {
        return 0;
    }
    else
    {
        if (check(a) == 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int visa (char a[])
{
    if (a[0] != '4')
    {
        return 0;
    }
    else
    {
        if (check(a) == 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

// Check whether the inputted string is number character string or not
int checkcheck (char a[])
{
    int flag;
    for (int i=0; i < strlen (a); i++)
    {
        if (a[i] < '0' || a[i] > '9')
        {
            flag = 0;
            break;
        }
        else {
            flag = 1;
        }
    }
    return flag;
}

int main(void)
{
    char a[16];
    int p;

    // Prompt the users input numbers to check
    do
    {
        printf ("Number: ");
        scanf ("%s", a);
        p = checkcheck (a);
    } while (p == 0);

    if (strlen(a) == 15)
    {
        if (amex(a) == 1)
        {
            printf ("AMEX\n");
        }
        else
        {
            printf ("INVALID\n");
        }
    }
    else if (strlen(a) == 13)
    {
        if (visa(a) == 1)
        {
            printf ("VISA\n");
        }
        else
        {
            printf ("INVALID\n");
        }
    }
    else if (strlen(a) == 16)
    {
        if (mastercard(a) == 1)
        {
            printf ("MASTERCARD\n");
        }
        else if (visa(a) == 1)
        {
            printf ("VISA\n");
        }
        else
        {
            printf ("INVALID\n");
        }
    }
    else
    {
        printf ("INVALID\n");
    }
    return 0;
}