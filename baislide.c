#include <stdio.h>

int linearsearch (int a[10], int b) {
    int i;
    for (i=0; i<10; i++) {
        if (a[i]==b) {
            return i;
        } else {
            return -1;
        }
    }
}

int main() {
    int n=10;
    int a[n];
    int i;
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    printf ("Nhap so can tim trong mang: ");
    int b;
    scanf ("%d", &b);
    int x = linearsearch (a[n], b);
    if (x != -1) {
        printf ("Co");
    } else {
        printf ("Khong");
    }
    return 0;
}

