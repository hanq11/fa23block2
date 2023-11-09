#include <stdio.h>
int main() {
    if (4 > 2 && 4 > 3) {
        printf("Bieu thuc 1 \n");
    }

    if (4 > 5 || 6 > 9) {
        printf("Bieu thuc 2 \n");
    }

    if ( !(4 > 5) || 6 > 9) {
        printf("Bieu thuc 3 \n");
    }
}