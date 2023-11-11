#include <stdio.h>
int main() {
    int a = 5;
    int b = 10;
    int c = 15;
    int d = 20;
    int e = 25;
    printf("Gia tri cua a += 5 la: %d \n", a += 5);
    printf("Gia tri cua b -= 5 la: %d \n", b -= 5);
    printf("Gia tri cua c *= 5 la: %d \n", c *= 5);
    printf("Gia tri cua d /= 5 la: %d \n", d /= 5);
    printf("Gia tri cua e %%= 5 la: %d \n", e %= 5);
    return 0;    
}