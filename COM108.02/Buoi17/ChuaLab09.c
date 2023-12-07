#include <stdio.h>

void chucNang1() {
    // Nhập thông tin
    char hoTen[30], mssv[10];
    int diem;
    printf("Vui lòng nhập hoTen của bạn: ");
    gets(hoTen);
    printf("Vui lòng nhập mssv của bạn: ");
    gets(mssv);
    printf("Vui lòng nhập diem của bạn: ");
    scanf("%d", &diem);
    // In thông tin
    printf("hoTen của bạn là: %s \n", hoTen);
    printf("mssv của bạn là: %s \n", mssv);
    printf("diem của bạn là: %d \n", diem);
};
void chucNang2(int n) {
    // Check xem n là chẵn hay lẻ
    // Tính trung bình cộng các số chẵn từ 1 đến n
    if(n % 2 == 0) {
        printf("n là số chẵn\n");
    } else {
        printf("n là số lẻ\n");
    }
    float tong = 0, dem = 0;
    int i;
    for(i = 0; i < n + 1; i++) {
        if(i % 2 == 0) {
            tong += i;
            dem++;
        }
    }
    printf("Trung bình cộng cần tính là: %f\n", tong / dem);
};
void chucNang3() {
    int soLuongTV;
    printf("Mời bạn nhập số lượng TV: ");
    scanf("%d", &soLuongTV);
    int mangKichCo[soLuongTV];
    int i;
    for(i = 0; i < soLuongTV; i++) {
        printf("Mời bạn nhập kích cỡ TV thứ %d: ", i + 1);
        scanf("%d", &mangKichCo[i]);
    }
    // Ý 1
    printf("Số lượng TV là: %d \n", soLuongTV);
    // Ý 2
    float tongKichCoTV = 0;
    for(i = 0; i < soLuongTV + 1; i++) {
        tongKichCoTV += mangKichCo[i];
    }
    printf("Trung bình cộng kích cỡ của các TV là: %f\n", tongKichCoTV/soLuongTV);
    // Ý 3
    int kichCoLonNhat = mangKichCo[0];
    int viTriLonNhat = 0;
    for(i = 0; i < soLuongTV + 1; i++) {
        if(kichCoLonNhat < mangKichCo[i]) {
            kichCoLonNhat = mangKichCo[i];
            viTriLonNhat = i;
        }
    }
    printf("Vị trí của TV có kích cỡ lớn nhất là: %d\n", viTriLonNhat + 1);
};
int main() {
    printf("+--------------------------Menu------------------------+\n");
    printf("1. Thông tin cá nhân\n");
    printf("2. Tính tổng từ 1 đến N\n");
    printf("3. Thông tin Ti vi\n");
    printf("0. Thoát\n");
    printf("+--------------------------------------------------------+\n");
    int luaChon = 0;
    do {
        printf("Vui lòng nhập lựa chọn: ");
        scanf("%d", &luaChon);
        getchar();
        switch(luaChon) {
            case 1: {
                chucNang1();
                break;
            }
            case 2: {
                int n = 0;
                printf("Vui lòng nhập n: ");
                scanf("%d", &n);
                chucNang2(n);
                break;
            }
            case 3: {
                chucNang3();
                break;
            }
            case 0: {
                printf("Thoát");
                break;
            }
        }
    } while(luaChon != 0);
}