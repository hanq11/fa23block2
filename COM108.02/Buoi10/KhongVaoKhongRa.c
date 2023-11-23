#include <stdio.h>
// Nhập vào 2 số a và b, tính (a + b) * 2

void tinhGiaTri() {
    int a, b, ketQua;
    printf("Vui long nhap a: ");
    scanf("%d", &a);
    printf("Vui long nhap b: ");
    scanf("%d", &b);
    ketQua = (a + b) * 2;
    printf("Ket qua la: %d", ketQua);
}
int main() {
    tinhGiaTri();
    return 0;
}