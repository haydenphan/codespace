#include <stdio.h>
#include <cs50.h>

int main() {
    
    string name, age, phone;
    printf ("Enter your name: ");
    name = scanf ("%s", &name);
    printf ("Enter your age: ");
    name = scanf ("%s", &age);
    printf ("Enter your phone number: ");
    name = scanf ("%s", &phone);
    printf ("%s%s%s", name, age, phone)
}