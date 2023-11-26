#include <stdio.h>
int a = 1; // Biến toàn cục
void inSo() {
    printf("In a lan 1: %d \n", a);
    int b = 2; // Biến cục bộ
    {
        printf("In b lan 1: %d \n", b);
        printf("In a lan 2: %d \n", a);
        int c = 3; // Biến cục bộ
    }
}
int main() {
    printf("In a lan 3: %d \n", a);
    inSo();
    int d = 4; // Biến cục bộ
    return 0;
}