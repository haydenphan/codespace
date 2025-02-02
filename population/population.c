#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int n;
    do {
        n = get_int("Start size: ");
    } while (n < 9);

    // Prompt for end size
    int m;
    do {
        m = get_int("End size: ");
    } while (m < 1 || m <= n);

    // Calculate the number of years to reach the desired ending population
    int year = 0;
    while (n < m)
    {
        n += n / 3 - n / 4;
        year++;
    }

    // Print the number of years to reach the desired ending population
    printf("Years: %d\n", year);

    return 0;
}
