#include <stdio.h>
int main() {
    float x;
    float mangFloat[5];
    int i, j = 0;
    // Duyệt mảng và Nhập dữ liệu cho mảng
    for(i = 0; i < 5; i++) {
        printf("Vui lòng nhập phần tử %d: ", i);
        scanf("%f", &mangFloat[i]);
    }
    // Duyệt mảng và Xuất dữ liệu của mảng
    for(i = 0; i < 5; i++) {
        printf("Phần tử %d của mảng có giá trị là: %f \n", i, mangFloat[i]);
    }
    printf("Vui lòng nhập số x cần tìm trong mảng: ");
    scanf("%f", &x);
    int flag = 0;
    while(j < 5) {
        if(x == mangFloat[j]) {
            printf("X có xuất hiện trong mảng");
            flag++;
            break;
        } 
        j++;
    }
    if(flag == 0) {
        printf("X không xuất hiện trong mảng");
    }
}