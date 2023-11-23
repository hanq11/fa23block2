#include <stdio.h>
// Nhập vào 2 số a và b, tính (a + b) * 2
void tinhGiaTri(int a, int b) {
    int ketQua = (a + b) * 2;
    printf("Ket qua la: %d", ketQua);
}
int main() {
    int c, d;
    printf("Vui long nhap a: ");
    scanf("%d", &c);
    printf("Vui long nhap b: ");
    scanf("%d", &d);
    tinhGiaTri(c, d);
    return 0;
}
