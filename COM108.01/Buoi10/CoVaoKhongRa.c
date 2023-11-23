#include <stdio.h>
// Nhap chieu dai chieu rong va tinh chu vi cua hinh chu nhat
// Khai báo hàm tính chu vi hình chữ nhật
// Hàm có vào không có ra
void tinhChuViHCN(int chieuDai, int chieuRong) {
    printf("Chu vi HCN la: %d", (chieuDai + chieuRong) * 2);
}
int main() {
    int a, b;
    printf("Nhap chieu dai: ");
    scanf("%d", &a);
    printf("Nhap chieu rong: ");
    scanf("%d", &b);
    tinhChuViHCN(a, b);
    return 0;
}
