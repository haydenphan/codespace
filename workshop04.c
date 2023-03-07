#include <stdio.h>

int T(int* p, int* q) {
    int t = *p;
    *p = *q;
    *q = t;
}
int main() {
    int a=7, b=6, c=5;
    int L= t(b, a, c);
    printf("%d\n", L);
}