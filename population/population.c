#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int n,m;
    do {
        n = get_int ("Start size: ");
    } while (n<1)

    // TODO: Prompt for end size
    do {
        m = get_int ("End size: ");
    } while (m<1)
    // TODO: Calculate number of years until we reach threshold
    int year = -1;
    for (int i=n; i<=m; i*= 13/12) {
        year++;
    }
    // TODO: Print number of years
    
}
