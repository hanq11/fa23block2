#include <stdio.h>

int main() {
    int i = 0;
    int so = 0;
    int tong = 0;
    printf("Vui long nhap so: ");
    scanf("%d", &so);
    while(i < so) {
        if(i >= so / 2) {
            break;
        }
        tong += i;
    }
    printf("Tong la: %d", tong);
}