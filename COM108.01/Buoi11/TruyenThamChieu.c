#include <stdio.h>

void hoanDoi(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 200, b = 400;
    printf("Gia tri cua a va b lan luot la %d, %d \n", a, b);
    hoanDoi(&a, &b);
    printf("Gia tri cua a va b lan luot la %d, %d \n", a, b);
    return 0;
}