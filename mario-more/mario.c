#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do {
        height = get_int ("Height: ");
    } while (height<1);
    for (int i = 1; i <= height; i++) {
        // Print spaces before the blocks
        for (int j = 0; j < height - i; j++) {
            printf(" ");
        }
        // Print left side of the pyramid
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        // Print gap between the two sides
        printf("  ");
        // Print right side of the pyramid
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}