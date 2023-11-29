#include <stdio.h>
#include <string.h>

int main() {
    char mang1[10] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char mang2[10] = {'c', '\0'};
    strcat(mang1, mang2); // mang1 = helloc
    strcat(mang2, mang1); // chelloc
    puts(mang2);
}