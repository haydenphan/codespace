#include <stdio.h>

int linearsearch (int a[10], int b) {
    int i, kq;
    for (i=0; i<10; i++) {
        if (a[i]==b) {
            kq = i;
        } else {
            kq = -1;
        }
    }
    return kq;
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
    int x = linearsearch (a[10], b);
    if (x != -1) {
        printf ("Co");
    } else {
        printf ("Khong");
    }
    return 0;
}

