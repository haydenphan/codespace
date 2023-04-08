#include <stdio.h>

int avr (int* a, int n) {
    int i, sum=0;
    for (i=0; i<n; i++) {
        sum += a[i];
    }
    return (double)(sum/n);
}

int total (int* b, int m) {
    int i, sum=0;
    for (i=0; i<m; i++) {
        sum += b[i];
    }
    return sum;
}

int main() {
    int i, n;
    char option;
    printf ("Number of weeks taking CS50: ");
    scanf ("%d", &n);
    int a[n];
    for (i=0; i<n; i++) {
       printf ("Week %d HW Hours: ", i);
       scanf ("%d", &a[i]);
    }
    printf ("Enter T for total hours, A for average hours per week: ");
    scanf ("%c", &option);
    switch (option) {
        case 'T':
           int t = total (&a, n);
           printf ("%d hours", t);
        case 'A':
           double m = avr (&a, n);
           printf ("%.1lf hours", m);
    }
    return 0;
}