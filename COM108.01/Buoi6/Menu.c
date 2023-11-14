#include <stdio.h>

int main() {
    printf("Menu của chương trình: \n");
    printf("1. Điểm danh\n");
    printf("2. Làm bài tập\n");
    int luaChon = 0;
    printf("Vui lòng chọn chức năng: ");
    scanf("%d", &luaChon);
    switch (luaChon) {
        case 1:
            printf("Chức năng điểm danh");
            break;
        case 2:
            printf("Chức năng làm bài tập");
            break;
    }
    return 0;
}