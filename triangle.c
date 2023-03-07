#include <stdio.h>
#include <stdbool.h>

bool valid_triangle(double a, double b, double c) {
    if (a<=0 || b<=0 || c<=0) {
        return false;
    } else if (a+b<=c || a+c<=b || b+c<=a) {
        return false;
    } else {
        return true;
    }
}

int main() {
    double a, b, c;
    printf ("Nhap vao do dai 3 canh cua tam giac can kiem tra: ");
    scanf ("%lf%lf%lf", &a, &b, &c);
    bool n = valid_triangle(a, b, c);
    if (n == true) {
        printf ("3 so vua nhap la 3 canh cua tam giac\n");
    } else {
        printf ("Da xay ra loi! Vui long nhap lai\n");
    }
}

