#include <stdio.h>
// Nhap chieu dai chieu rong va tinh chu vi cua hinh chu nhat
// Khai báo hàm tính chu vi hình chữ nhật
// Hàm có vào không có ra
int tinhChuViHCN() {
    int chieuDai, chieuRong, chuViHCN;
    printf("Vui long nhap chieu dai: ");
    scanf("%d", &chieuDai);
    printf("Vui long nhap chieu rong: ");
    scanf("%d", &chieuRong);
    chuViHCN = (chieuDai + chieuRong) * 2 ;
    return chuViHCN;
}
int main() {
    int ketQua;
    ketQua = tinhChuViHCN();
    printf("Chu vi la: %d", ketQua);
}