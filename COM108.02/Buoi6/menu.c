#include <stdio.h>

int main() {
    printf("Chào mừng đến với chương trình gì đó: \n");
    printf("Chức năng 1: Điểm danh\n");
    printf("Chức năng 2: Làm bài tập\n");
    printf("Mời bạn chọn chức năng cho chương trình: ");

    int luaChon = 0;
    scanf("%d", &luaChon);
    switch(luaChon) {
        case 1:
            printf("Điểm danh học sinh");
            break;
        case 2:
            printf("Làm bài tập");
            break;
    }
}