#include <stdio.h>
int main() {
    // Khai báo biến tổng, tổng các số chia hết cho 3 trong khoảng 1-20
    float tong = 0;
    // Khai báo biển đếm số các số chia hết cho 3 trong khoảng
    float dem = 0;
    // Khai báo biến khởi đầu
    int i = 1;
    // Khai báo vòng lặp
    while(i <= 20) {
        // Kiểm tra từng số i, nếu i chia hết cho 3 thì cộng vào tổng, dem++
        if(i % 3 == 0) {
            tong += i;
            dem++;
        }
        i++;
    }
    printf("Kết quả là: %f", tong/dem);
}