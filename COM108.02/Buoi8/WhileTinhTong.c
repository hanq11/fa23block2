#include <stdio.h>
//Tính tổng các số từ min đến max, 
//trong đó min max được nhập từ bàn phím

int main() {
    int min = 0, max = 0, tong = 0;
    printf("Vui long nhap min: ");
    scanf("%d", &min);
    int i = min;
    printf("Vui long nhap max: ");
    scanf("%d", &max);
    while(i <= max) {
        tong += i;
        i++;
    }
    printf("Ket qua la: %d", tong);
    return 0;
}
