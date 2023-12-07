#include <stdio.h>

void chucNang1() {
    // Nhập vào
    char hoTen[30], mssv[10];
    int diem;
    printf("Vui lòng nhập hoTen: ");
    gets(hoTen);
    printf("Vui lòng nhập mssv: ");
    gets(mssv);
    printf("Vui lòng nhập diem: ");
    scanf("%d", &diem);
    // In ra
    printf("hoTen của bạn là %s \n", hoTen);
    printf("mssv của bạn là %s \n", mssv);
    printf("diem của bạn là %d \n", diem); 
};
void chucNang2(int n) {
    // Tính trung bình cộng các số lẻ từ 1 tới n
    // in ra xem n là số chẵn hay số lẻ
    if(n % 2 == 0) {
        printf("n là số chẵn \n");
    } else {
        printf("n là số lẻ \n");
    }
    // Tính trung bình cộng
    int i;
    float tong = 0, dem = 0;
    for(i = 1; i < n + 1; i++) {
        if(i % 2 != 0) {
            tong = tong + i;
            dem++;
        }
    }
    printf("Trung bình cộng cần tính là: %f\n", tong/dem);
};
void chucNang3() {
    int soLuongTV;
    printf("Mời nhập số lượng TV: ");
    scanf("%d", &soLuongTV);
    int kichThuocTV[soLuongTV];
    int i;
    for(i = 0; i < soLuongTV; i++) {
        printf("Mời nhập kích thước TV thứ %d: ", i + 1);
        scanf("%d", &kichThuocTV[i]);
    }
    // Ý 1
    printf("Số lượng TV là: %d\n", soLuongTV);
    // Ý 2
    float tongKichCo = 0;
    for(i = 0; i < soLuongTV; i++) {
        tongKichCo += kichThuocTV[i];
    }
    printf("Kích cỡ trung bình là: %f\n", tongKichCo / soLuongTV);
    // Ý 3
    int kichCoLonNhat = kichThuocTV[0];
    int viTriLonNhat = 0;
    for(i = 0; i < soLuongTV; i++) {
        if(kichCoLonNhat < kichThuocTV[i]) {
            kichCoLonNhat = kichThuocTV[i];
            viTriLonNhat = i;
        }
    }
    printf("Kích cỡ TV lớn nhất là: %d\n", kichCoLonNhat);
    printf("Vị trí TV có kích cỡ lớn nhất là: %d\n", i + 1);
};
int main() {
    printf("+--------------------------Menu------------------------+ \n");
    printf("1. Thông tin cá nhân \n");
    printf("2. Tính tổng từ 1 đến N \n");
    printf("3. Thông tin Ti vi \n");
    printf("0. Thoát \n");
    printf("+--------------------------------------------------------+ \n");
    
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
                int n;
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
    } while (luaChon != 0);
}