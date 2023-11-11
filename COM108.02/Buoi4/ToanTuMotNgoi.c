#include <stdio.h>
int main() {
    int a = 5, b = 5;
    // Đặt toán tử ++ ở đằng trước
    // Thì chương trình sẽ tăng giá trị của a lên 1 đơn vị
    // Sau đấy thì mới trả giá trị mới của a về cho hàm printf
    printf("Giá trị 1: %d\n", ++a);
    // Đặt toán tử ++ ở đằng sau
    // Thì chương trình sẽ trả về hàm printf giá trị của b ngay lập tức
    // Sau đấy mới thực hiện tăng giá trị của b thêm 1 đơn vị
    printf("Giá trị 2: %d\n", b++);
    printf("Giá trị của b là: %d", b);
    return 0;
}