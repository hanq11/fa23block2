#include <stdio.h>
#include <stdlib.h> // Thư viện chứa lệnh exit(0);
int main() {
    printf("Vui long chon chuc nang\n");
    printf("Chuc nang 1. Hoho\n");
    printf("Chuc nang 2. Hehe\n");
    printf("Chuc nang 3. Thoat\n");
    int luaChon = 0;
    // Khai báo nhãn LUACHON
    LUACHON: printf("Vui long nhap lua chon: ");
    scanf("%d", &luaChon);
    switch(luaChon) {
        case 1:
            printf("hoho\n");
            break;
        case 2:
            printf("hehe\n");
            break;
        case 3:
            exit(0); // Thoát chương trình
    }
    // Quay về dòng code của nhãn LUACHON
    goto LUACHON;
}