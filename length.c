#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main() {
    printf ("What's your name?\n");
    char name[50];
    scanf ("%s", name);
    int n = strlen(name);
    printf ("%d\n", n);
}