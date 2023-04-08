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
    for (i=0; i<n; i++) {
        sum += a[i];
    }
    return sum;
}

int main() {
    int n;
    printf ("Number of weeks taking CS50: ");
    scanf ("%d", &n);
    int a[n];
           int i;
           for (i=0; i<n; i++) {
             printf ("Week %d HW Hours: ", i);
             scanf ("%d", a[i]);
           }
    }
}