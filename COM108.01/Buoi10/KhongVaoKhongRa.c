#include <stdio.h>
// Nhap chieu dai chieu rong va tinh chu vi cua hinh chu nhat
// Khai báo hàm tính chu vi hình chữ nhật
// Hàm không có đầu vào, ra

void tinhChuViHCN() {
    int chieuDai, chieuRong, chuViHCN;
    printf("Vui long nhap chieu dai: ");
    scanf("%d", &chieuDai);
    printf("Vui long nhap chieu rong: ");
    scanf("%d", &chieuRong);
    chuViHCN = (chieuDai + chieuRong) * 2 ;
    printf("Chu vi cua HCN la: %d", chuViHCN);
}
int main() {
    tinhChuViHCN();
    return 0;
}