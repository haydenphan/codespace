#include <stdio.h>
int linearsearch (int a[10],int b);

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

int linearsearch (int a[n], int b) {
    for (i=0; i<n; i++) {
        if (a[i]==b) {
            return i;
        } else {
            return -1;
        }
    }
}