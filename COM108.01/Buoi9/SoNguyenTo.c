#include <stdio.h>

int main() {
    printf("Vui long nhap so: ");
    int so = 0;
    scanf("%d", &so);
    int i;
    int flag = 0;
    if (so == 1 || so == 0) {
        flag = 0;
    }
    for (i = 2; i <= so / 2; ++i) {
        if (so % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("So nhap vao la so nguyen to");
    } else {
        printf("So nhap vao khong phai la so nguyen to");
    }

}