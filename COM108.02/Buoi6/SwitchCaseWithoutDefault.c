#include <stdio.h>

int main() {
    printf("Việt Nam có bao nhiêu dân tộc anh em: \n");
    printf("a. 52\nb. 53\nc. 54\nd. 55\n");
    printf("Vui lòng chọn đáp án: ");
    char dapAn;
    scanf("%c", &dapAn);
    switch(dapAn) {
        case 'a':
            printf("Đáp án sai");
            break;
        case 'b':
            printf("Đáp án sai");
            break;
        case 'c':
            printf("Đáp án đúng");
            break;
        case 'd':    
            printf("Đáp án sai");
            break;
    }
}