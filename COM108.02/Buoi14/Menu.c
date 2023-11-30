#include <stdio.h>

int main() {
    printf("Menu co 2 chuc nang: \n");
    printf("1. Chuc nang 1: test \n");
    printf("2. Chuc nang 2: test \n");
    printf("3. Thoat\n");
    int luaChon = 0;
    do {
        printf("Vui long nhap lua chon: ");
        scanf("%d", &luaChon);
        switch(luaChon) {
            case 1: {
                printf("Chuc nang 1\n");
                break;
            }
            case 2: {
                printf("Chuc nang 2\n");
                break;
            }
            case 3: {
                printf("Thoat");
                break;
            }
        }
    } while(luaChon != 3);
}