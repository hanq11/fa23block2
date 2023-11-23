#include <stdio.h>
int main() {
    printf("Vui long chon chuc nang\n");
    printf("Chuc nang 1. Hoho\n");
    printf("Chuc nang 2. Thoat\n");
    // Kiểm soát lệnh thoát của chương trình
    int thoat = 0;
    int luaChon = 0;
    while(!thoat) {
        printf("Vui long nhap lua chon: ");
        scanf("%d", &luaChon);
        switch(luaChon) {
            case 1:
                printf("hoho\n");
                break;
            case 2:
                thoat = 1;
                break;
        }
    }

}