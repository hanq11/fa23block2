#include <stdio.h>
int main() {
    printf("Mời bạn chon đáp án a hoac b: ");
    char dapAn;
    scanf("%c", &dapAn);
    // Kiểu 1: khai báo biến bên ngoài switch
    int c = 1, d = 2;
    switch(dapAn) {
        case 'a':
            // Kiểu 2: Khai báo biến ngay bên trong case, nhưng đặt tất cả code
            // vào bên trong 1 block code {}
            {
                int a = 1;
                int b;
                printf("Moi nhap so con lai: ");
                scanf("%d", &b);
                printf("A + B = %d", a + b);
                break;   
            }
        case 'b':
            printf("Kết quả của c + d: %d", c + d);
            break;
    }
 }