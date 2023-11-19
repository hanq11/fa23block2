#include <stdio.h>

int main() {
    // Khai báo biến khởi đầu
    int i;
    // Đặt giá trị khởi đầu, điều kiện dừng, bước nhảy
    for(i = 1; i < 11; i++) {
        printf("%d x %d = %d \n", 7, i, 7 * i);
    }
    return 0;
}