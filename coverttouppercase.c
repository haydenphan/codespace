#include <stdio.h>
#include <string.h>

int main() {
    printf ("Nhap tu hoac ki tu: ");
    char s[100];
    scanf ("%s", s);
    int i;
    for (i=0; i<strlen(s); i++) {
        if (s[i]>='a' && s[i]<='z') {
            printf ("%s", s[i]-32);
        } else {
            printf ("%s", s[i]);
        }
    }
    printf ("\n");
}