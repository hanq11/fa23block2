#include <stdio.h>
int main() {
    printf("Viet Nam có bao nhiêu dân tộc anh em: \n");
    printf("a. 52\nb. 53\nc. 54\nd. 55\n");
    printf("Mời bạn chon đáp án a, b, c hoặc d: ");
    char dapAn;
    scanf("%c", &dapAn);
    switch(dapAn) {
        case 'a':
            printf("Dap an sai");
            break;
        case 'b':
            printf("Dap an sai");
            break;
        case 'c':
            printf("Dap an dung");
            break;
        case 'd':
            printf("Dap an sai");
            break;
        default:
            printf("Ban da chon sai bo dap an");
            break;
            
    }
 }