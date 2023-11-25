#include <stdio.h>
void hoanDoi(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main() {
    int x = 200, y = 400;
    printf("Gia tri cua x va y lan luot la %d, %d \n", x, y);
    hoanDoi(x, y);
    printf("Gia tri cua x va y lan luot la %d, %d", x, y);
    return 0;
}