#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
     do {
    	int n = get_int("Start size: ");
    } while (n<1);

    // Prompt for end size
    do {
    	 int m = get_int("End size: ");
	} while (m<1 || m<=n);

    // Calculate the number of years to reach the desired ending population
    int new_llamas;
    int llamas_passed_away;
    int years = 0;
    while (n < m)
    {
        new_llamas = start_size / 3;
        llamas_passed_away = start_size / 4;
        start_size = start_size + new_llamas - llamas_passed_away;
        years++;
    }

    // Print the number of years to reach the desired ending population
    printf("Years: %d\n", years);

    return 0;
}
