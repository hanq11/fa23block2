#include <stdio.h>
// Nhập vào 2 số a và b, tính (a + b) * 2
int tinhGiaTri() {
    int a, b, ketQua;
    printf("Vui long nhap a: ");
    scanf("%d", &a);
    printf("Vui long nhap b: ");
    scanf("%d", &b);
    ketQua = (a + b) * 2;
    return ketQua;
}
int main() {
    int giaTri = tinhGiaTri();
    printf("Gia tri la: %d", giaTri);
    return 0;
}