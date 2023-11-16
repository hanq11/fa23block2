#include <stdio.h>
int main() {
    // Khởi tạo biến đếm i = 1
    int i = 1;
    // Biến tổng các số chia hết cho 3
    float tong = 0;
    // Biến đếm số các số chia hết cho 3
    float dem = 0;
    // Khởi tạo vòng lặp while
    while(i < 21) {
        if(i % 3 == 0) { // Nếu i chia hết cho 3 thì cộng vào tổng và tăng đếm
            tong += i;
            dem++;
        }
        i++;
    }
    printf("Kết quả là: %f", tong / dem);
    return 0;
}