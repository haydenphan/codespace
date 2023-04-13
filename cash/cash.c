#include <cs50.h>
#include <stdio.h>

int get_cents(void)
{
    int cents;
    do
    {
        cents = get_int ("Change owed: ");
    } while (cents < 1);
    return cents;
}

int calculate_quarters(int cents)
{
    if (cents < 25)
    {
        return 0;
    }
    else
    {
        int count = 0;
        do
        {
            cents -= 25;
            count++;
        } while (cents >= 25);
        return count;
    }
}

int calculate_dimes(int cents)
{
    if (cents < 10)
    {
        return 0;
    }
    else
    {
        int count = 0;
        do
        {
            cents -= 10;
            count++;
        } while (cents >= 10);
        return count;
    }
}

int calculate_nickels(int cents)
{
    if (cents < 5)
    {
        return 0;
    }
    else
    {
        int count = 0;
        do
        {
            cents -= 5;
            count++;
        } while (cents >= 5);
        return count;
    }
}

int calculate_pennies(int cents)
{
    if (cents < 1)
    {
        return 0;
    }
    if (cents == 1)
    {
        return 1;
    }
}

int calcute_total (int a, int b, int c, int d)
{
    return a+b+c+d;
}

int main(void)
{
    /*
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO
    return 0;
}

int calculate_quarters(int cents)
{
    // TODO
    return 0;
}

int calculate_dimes(int cents)
{
    // TODO
    return 0;
}

int calculate_nickels(int cents)
{
    // TODO
    return 0;
}

int calculate_pennies(int cents)
{
    // TODO
    return 0;
    */
   int cents = get_cents();
   int a = calculate_quarters(cents);
   int b = calculate_dimes(cents);
   int c = calculate_nickels(cents);
   int d = calculate_pennies(cents);
   printf ("%d\n", calcute_total(a,b,c,d));
   return 0;
}
