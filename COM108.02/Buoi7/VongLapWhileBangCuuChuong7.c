#include <stdio.h>
int main() {
    // Khởi tạo biến khởi đầu cho vòng lặp
    int i = 1;
    // Khai báo vòng lặp có điều kiện dừng là i <= 10
    while(i <= 10) {
        printf("7 x %d = %d \n", i, 7 * i);
        i++;
    }
    return 0;
}