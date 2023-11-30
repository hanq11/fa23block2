#include <stdio.h>

int main() {
    printf("Menu 2 co chuc nang: \n");
    printf("Chuc nang 1: test\n");
    printf("Chuc nang 2: test\n");
    int luaChon = 0;
    do {
        printf("Vui long nhap lua chon: ");
        scanf("%d", &luaChon);
        switch(luaChon) {
            case 1: {
                printf("chuc nang 1\n");
                break;
            }
            case 2: {
                printf("chuc nang 2\n");
                break;
            }
            case 0: {
                printf("thoat");
                break;
            }
        }
    } while(luaChon != 0);
    
}