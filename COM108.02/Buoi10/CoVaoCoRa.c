#include <stdio.h>
// Nhập vào 2 số a và b, tính (a + b) * 2

int tinhGiaTri(int a, int b) {
    int giaTri = (a + b) * 2;
    return giaTri;
}
int main() {
    int ketQua = tinhGiaTri(10, 20);
    printf("Ket qua la: %d", ketQua);
    return 0;
}