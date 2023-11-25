#include <stdio.h>

int a = 1; // Biến toàn cục
void inAn() {
    int b = 2; // Biến cục bộ
    printf("In a lần 1: %d \n", a);
    {
        printf("In b lần 1: %d \n", b);
        int c = 3; // Biến cục bộ
        printf("In a lần 2: %d \n", a);
    }
}
int main() {
    int d = 4; // Biến cục bộ
    printf("In a lần 3: %d \n", a);
    inAn();
}