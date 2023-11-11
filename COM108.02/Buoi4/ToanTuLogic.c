#include <stdio.h>

int main() {
    if(4 > 3 && 5 < 6) {
        printf("Bieu thuc 1\n");
    }
    if(5 > 3 || 4 < 2) {
        printf("Bieu thuc 2\n");
    }
    if(!(10 >= 9) && 7 < 8) {
        printf("Bieu thuc 3");
    }
    return 0;
}
