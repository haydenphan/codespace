#include <stdio.h>
#include <cs50.h>

int main() {
    string name = get_string ("Enter your name: ");
    string age = get_string ("Enter your age: ");
    string phone = get_string ("Enter your phone number: ");
    printf ("%s%s%s", name, age, phone);
}