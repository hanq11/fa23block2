#include <stdio.h>
#include <string.h>
// Nhập từ bàn phím họ và tên, mã số sinh viên,
// xuất ra họ và tên nối với chuỗi mã số sv
int main() {
    char hoVaTen[50], mssv[10];
    printf("Vui lòng nhập họ và tên: ");
    // Sử dụng gets để nhập giá trị cho chuỗi, gets có thể nhận khoảng trắng
    gets(hoVaTen);
    printf("Vui lòng nhập mssv: ");
    // Sử dụng scanf để nhập giá trị cho chuỗi, scanf không thể nhận khoảng trắng
    scanf("%s", mssv);
    // Sử dụng lệnh strcat để nối 2 chuỗi, chuỗi kết quả sẽ được gán giá trị
    // cho mảng thứ nhất được nhập vào trong lệnh strcat()
    strcat(hoVaTen, mssv);
    // In 2 chuỗi theo 2 cách, với lệnh puts, \n sẽ tự động được thêm vào cuối
    puts(hoVaTen);
    printf("%s", hoVaTen);
}