#include <stdio.h>
#include <string.h>

int main() {
    printf ("Nhap tu hoac ki tu: ");
    char s[100];
    scanf ("%s", s);
    int i;
    for (i=0; i<strlen(s); i++) {
        if (s[i]>='a' && s[i]<='z') {
            printf ("%c", s[i]-32);
        } else {
            printf ("%c", s[i]);
        }
    }
    printf ("\n");
}