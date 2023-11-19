#include <stdio.h>

int main() {
    // Khai báo biến khởi đầu
    int i;
    // Đặt giá trị biến khởi đầu; điều kiện dừng; bước nhảy
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", 9, i, 9 * i);
    }
    return 0;
}