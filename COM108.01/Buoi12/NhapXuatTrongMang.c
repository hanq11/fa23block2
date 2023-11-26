#include <stdio.h>
int main() {
    float mangFloat[5];
    int i;
    for(i = 0; i < 5; i++) {
        printf("Vui lòng nhập giá trị cho phần tử %d: ", i);
        scanf("%f", &mangFloat[i]);
    }
    for(i = 0; i < 5; i++) {
        printf("Giá trị phần tử %d của mảng là: %f \n", i, mangFloat[i]);
    }
    float x;
    printf("Vui lòng nhập số x cần tìm: ");
    scanf("%f", &x);
    // Đặt i = 0 vì sau khi chạy 1 vòng for, i = 5
    i = 0;
    int flag = 0;
    while(i < 5) {
        if(x == mangFloat[i]) {
            printf("X có xuất hiện trong mảng");
            flag = 1;
            break;
        }
        i++;
    }
    if(flag == 0) {
        printf("X không xuất hiện");
    }
}