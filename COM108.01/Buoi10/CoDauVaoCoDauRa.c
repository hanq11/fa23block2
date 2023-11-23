#include <stdio.h>
// Nhap chieu dai chieu rong va tinh chu vi cua hinh chu nhat
// Khai báo hàm tính chu vi hình chữ nhật
// Hàm có vào có ra
int tinhChuViHCN(int chieuDai, int chieuRong) {
    int chuVi;
    chuVi = (chieuDai + chieuRong) * 2;
    return chuVi;
}
int main() {
    printf("Chu vi cua HCN la: %d", tinhChuViHCN(10, 20));
    return 0;
}