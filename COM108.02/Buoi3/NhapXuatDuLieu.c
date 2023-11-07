#include <stdio.h>

int main() {
    double bienDouble = 0;
    unsigned int bienUnsiged = 0;
    char bienChar = 0;
    printf("Gia tri cua bien double la: ");
    scanf("%lf", &bienDouble);
    getchar();
    printf("Gia tri cua bien char la: ");
    scanf("%c", &bienChar);
    printf("Gia tri cua bien unsigned la: ");
    scanf("%u", &bienUnsiged);

    printf("Bien char la: %c\n", bienChar);
    printf("Bien Double: %lf \n", bienDouble);
    printf("Bien unsigned int la: %u \n", bienUnsiged);
    return 0;
}