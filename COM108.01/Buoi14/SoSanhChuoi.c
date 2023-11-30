#include <stdio.h>
#include <string.h>
int main() {
    char str1[20], str2[20];
    printf("Vui long nhap str1: ");
    gets(str1);
    printf("Vui long nhap str2: ");
    gets(str2);
    int ketQua = strcmp(str1, str2);
    if(ketQua == 0) {
        printf("Hai chuoi bang nhau");
    } else if (ketQua > 0) {
        printf("Str1 > Str2");
    } else {
        printf("Str1 < Str2");
    }
    return 0;
}