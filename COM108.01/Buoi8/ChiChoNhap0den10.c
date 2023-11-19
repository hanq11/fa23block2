#include <stdio.h>

int main() {
    int so = 0;
    do {
        printf("Vui long nhap so tu 0 den 10: ");
        scanf("%d", &so);
    } while(so >= 0 && so <= 10);
    return 0;
}