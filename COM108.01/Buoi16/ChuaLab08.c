#include <stdio.h>

void chucNang1() {
    //Nhap va In ten, tuoi, dia chi, ky hoc, chuyen nganh
    char ten[50], diaChi[50], kyHoc[50], chuyenNganh[50];
    int tuoi;
    // Nhap 
    printf("Vui lòng nhập tên: ");
    gets(ten);
    printf("Vui lòng nhập tuổi: ");
    scanf("%d", &tuoi);
    getchar();
    printf("Vui lòng nhập địa chỉ: ");
    gets(diaChi);
    printf("Vui lòng nhập kỳ học: ");
    gets(kyHoc);
    printf("Vui lòng nhập chuyên ngành: ");
    gets(chuyenNganh);

    printf("Tên của bạn là: ");
    puts(ten);
    printf("Tuổi của bạn là: %d\n", tuoi);
    printf("Địa chỉ của bạn là %s\n", diaChi);
    printf("Kỳ học của bạn là: %s\n", kyHoc);
    printf("Chuyên ngành của bạn là: %s\n", chuyenNganh);
}

void chucNang2(int n) {
    // Tính tổng các số từ 1 cho đến số n vừa nhập
    int tong = 0;
    int i;
    for(i = 1; i <= n; i++) {
        tong += i;
    }
    printf("Tổng các số nguyên từ 1 cho đến số n vừa nhập là: %d\n", tong);
}

void chucNang3() {
    // Nhập số lớp và số lượng sinh viên từng lớp
    int soLop = 0;
    printf("Vui lòng nhập số lượng lớp: ");
    scanf("%d", &soLop);
    int sinhVienCacLop[soLop];
    int i;
    for(i = 0; i < soLop; i++) {
        printf("Số lượng sinh viên cho lớp số %d: ", i + 1);
        scanf("%d", &sinhVienCacLop[i]);
    }
    printf("Số lượng các lớp là %d \n", soLop);
    // In ra lớp có số lượng sinh viên < 30
    for(i = 0; i < soLop; i++) {
        if(sinhVienCacLop[i] < 30) {
            printf("Lớp %d có số lượng sinh viên < 30\n", i + 1);
        }
    }
    // In ra các lớp có số lượng sinh viên bé nhất
    // Bước 1: Tìm số lượng sinh viên bé nhất trong các lớp
    int soLuongSinhVienBeNhat = sinhVienCacLop[0];
    for(i = 0; i < soLop; i++) {
        if(soLuongSinhVienBeNhat > sinhVienCacLop[i]) {
            soLuongSinhVienBeNhat = sinhVienCacLop[i];
        }
    }
    // Bước 2: In ra các lớp có số lượng sinh viên bé nhất
    for(i = 0; i < soLop; i++) {
        if(sinhVienCacLop[i] == soLuongSinhVienBeNhat) {
            printf("Lớp có số lượng sinh viên bé nhất là: %d\n", i + 1);
        }
    }
}
int main() {
    printf("+--------------------------Menu------------------------+\n");
    printf("1. Nhập thông tin cá nhân \n");
    printf("2. Tính tổng  \n");
    printf("3. Thông tin sinh viên các lớp \n");
    printf("0. Thoát \n");
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
                printf("Thoat");
                break;
            }
        }
    } while(luaChon != 0);
}