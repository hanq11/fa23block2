#include <stdio.h>

int main() {
    int a;
    printf("Vui long nhap mot so: ");
    scanf("%d", &a); // 5\n
    // Nuốt \n bằng getchar
    getchar();
    char mang[20];
    printf("Vui long nhap mang: ");
    gets(mang);
    puts(mang);
}