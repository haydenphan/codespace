#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float S = 1;

    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        int giaithua = 1;
        for (int j = 1; j <= i; j++) {
            giaithua *= j;
        }
        S += (float)giaithua / pow(2 * i, 5);
    }

    printf("S = %.6f", sqrt(S));

    return 0;
}
