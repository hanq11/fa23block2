#include <stdio.h>

int main() {
    printf("Chào mừng: \n");
    printf("1. Cộng hai số\n");
    printf("2. Trừ 2 số\n");
    printf("Vui lòng chọn chức năng: ");
    int luaChon = 0;
    scanf("%d", &luaChon);
    // Giải pháp 1: khai báo biến bên ngoài switch case
    int a;
    int b;
    switch(luaChon) {
        case 1:
            printf("Vui long nhap a: ");
            scanf("%d", &a);
            printf("Vui long nhap b: ");
            scanf("%d", &b);
            printf("Tong cua 2 so la: %d", a + b);
            break;
        case 2:
            // Cách 2: đưa tất cả code vào trong 1 block code
            {
                int c;
                int d;
                printf("Vui long nhap c: ");
                scanf("%d", &c);
                printf("Vui long nhap d: ");
                scanf("%d", &d);
                printf("Hieu cua 2 so la: %d", c - d);
                break;
            }
    }
}