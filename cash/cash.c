#include <cs50.h>
#include <stdio.h>

// Ask how many cents the customer is owed
int get_cents(void)
{
    int cents;
    do
    {
        cents = get_int ("Change owed: ");
    } while (cents < 0);
    return cents;
}

// Calculate the number of quarters to give the customer
int calculate_quarters(int cents)
{
    int count = 0;
    if (cents < 25)
    {
        return 0;
    }
    else
    {
        do
        {
            cents -= 25;
            count++;
        } while (cents >= 25);
    }
    return count;
}

// Calculate the number of dimes to give the customer
int calculate_dimes(int cents)
{
    int count = 0;
    cents = cents - 25 * calculate_quarters(cents);
    if (cents < 10)
    {
        return 0;
    }
    else
    {
        do
        {
            cents -= 10;
            count++;
        } while (cents >= 10);
    }
    return count;
}

// Calculate the number of nickels to give the customer
int calculate_nickels(int cents)
{
    int count = 0;
    cents = cents - 25 * calculate_quarters(cents) - 10 * calculate_dimes(cents);
    if (cents < 5)
    {
        return 0;
    }
    else
    {
        do
        {
            cents -= 5;
            count++;
        } while (cents >= 5);
    }
    return count;
}

// Calculate the number of pennies to give the customer
int calculate_pennies(int cents)
{
    int count;
    cents = cents - 25 * calculate_quarters(cents) - 10 * calculate_dimes(cents) - 5 * calculate_nickels(cents);
    if (cents == 1)
    {
        count = 1;
    }
    else
    {
        count = 0;
    }
    return count;
}

// Sum coins
int calcute_total (int a, int b, int c, int d)
{
    return a+b+c+d;
}

int main(void)
{
   int cents = get_cents();
   int a = calculate_quarters(cents);
   int b = calculate_dimes(cents);
   int c = calculate_nickels(cents);
   int d = calculate_pennies(cents);

   printf ("%d\n", a);

   // Print total number of coins to give the customer
   printf ("%d\n", calcute_total (a, b, c, d));
   return 0;
}
