#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float S = 1; // khởi tạo giá trị S ban đầu là 1
    float giaithua = 1; // khởi tạo giá trị giaithua ban đầu là 1

    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        giaithua *= i; // tính giai thừa của i
        S += giaithua / pow(2 * i, 5); // tính phần tử i của biểu thức và cộng vào tổng
    }

    printf("S = %.6f", sqrt(S)); // tính căn bậc hai của tổng và in ra kết quả với 6 chữ số sau dấu phẩy

    return 0;
}
