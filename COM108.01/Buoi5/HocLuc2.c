#include <stdio.h>
// Nếu điểm >=9: xuất sắc, Nếu 9> điểm >=7: giỏi, Nếu 7> điểm >=3: tạm được
// Ngược lại: kém
int main() {
    int diem = 0;
    printf("Vui lòng nhập điểm: ");
    scanf("%d", &diem);
    if (diem < 3) {
        printf("Học sinh Kém");
    } else if (diem < 7) {
        printf("Học sinh tạm được");
    } else if (diem < 9) {
        printf("Học sinh giỏi");
    } else {
        printf("Học sinh xuất sắc");
    }
    return 0;
}
