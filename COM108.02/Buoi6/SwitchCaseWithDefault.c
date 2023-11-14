#include <stdio.h>

int main() {
    printf("Việt Nam có bao nhiêu dân tộc anh em: \n");
    printf("a. 52\nb. 53\nc. 54\nd. 55\n");
    printf("Vui lòng chọn đáp án: ");
    char dapAn;
    scanf("%c", &dapAn);
    switch(dapAn) {
        case 'a':
            printf("1");
        default:
            printf("5");
        case 'b':
            printf("2");
        case 'c':
            printf("3");
        case 'd':    
            printf("4");
            break;
    }
}