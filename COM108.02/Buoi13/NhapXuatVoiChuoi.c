#include <stdio.h>
#include <string.h>
// Nhập từ bàn phím họ và tên, mã số sinh viên,
// xuất ra họ và tên nối với chuỗi mã số sv
int main() {
    char hoVaTen[50], mssv[10];
    // Sử dụng gets để nhập họ và tên từ bàn phím, gets có thể nhận các ký tự khoảng trắng
    printf("Vui lòng nhập họ và tên: ");
    gets(hoVaTen);
    printf("Vui lòng nhập mã số sinh viên: ");
    // Sử dụng scanf để nhập mssv, scanf không thể nhận các ký tự khoảng trắng
    scanf("%s", mssv);
    strcat(hoVaTen, mssv);
    puts(hoVaTen);
    printf("%s", hoVaTen);
}