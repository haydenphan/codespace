#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float S = 1; // khởi tạo giá trị S ban đầu là 1

    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        int giaithua = 1; // khởi tạo giai thừa của i
        for (int j = 1; j <= i; j++) {
            giaithua *= j; // tính giai thừa của i
        }
        S += (float)giaithua / pow(2 * i, 5); // tính phần tử i của biểu thức và cộng vào tổng
    }

    printf("S = %.6f", sqrt(S)); // tính căn bậc hai của tổng và in ra kết quả với 6 chữ số sau dấu phẩy

    return 0;
}
