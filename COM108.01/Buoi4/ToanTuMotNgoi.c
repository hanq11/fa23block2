#include <stdio.h>

int main() {
    int a = 5;
    int b = 5;

    // Thuc hien tang a 1 don vi
    // roi moi tra ve gia tri cua a
    printf("%d \n", ++a);

    // Tra ve gia tri cua b
    // roi moi tang b 1 don vi
    printf("%d \n", b++);

    printf("Gia tri cua b sau tang la: %d", b);
}