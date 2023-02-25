#include <stdio.h>
#include <cs50.h>

int main() {
    string name = get_string ("Enter your name: ");
    int age = get_int ("Enter your age: ");
    int phone = get_int ("Enter your phone number: ");
    printf ("%s\n%d\n%d\n", name, age, phone);
}