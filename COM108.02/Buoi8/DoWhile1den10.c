#include <stdio.h>

int main() {
    int so = 0;
    do {
        printf("Moi ban nhap so: ");
        scanf("%d", &so);
    } while(so >= 0 && so <= 10);
    return 0;
}