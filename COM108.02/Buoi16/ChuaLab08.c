#include <stdio.h>

void chucNang1() {
    char ten[30], diaChi[50], kyHoc[10], chuyenNganh[20];
    int tuoi;

    // Nhập giá trị
    printf("Vui lòng nhập ten: ");
    gets(ten);
    printf("Vui lòng nhập tuoi: ");
    scanf("%d", &tuoi);
    // Đặt getchar() để nuốt ký tự \n
    getchar();
    printf("Vui lòng nhập diaChi: ");
    gets(diaChi);
    printf("Vui lòng nhập kyHoc: ");
    scanf("%s", kyHoc);
    // Đặt getchar() để nuốt ký tự \n
    getchar();
    printf("Vui lòng nhập chuyenNganh: ");

    // In ra giá trị
    gets(chuyenNganh);
    printf("ten của bạn là: %s\n", ten);
    printf("tuoi của bạn là: %d\n", tuoi);
    printf("diaChi của bạn là: ");
    puts(diaChi);
    printf("kyHoc của bạn là: ");
    puts(kyHoc);
    printf("chuyenNganh của bạn là: ");
    puts(chuyenNganh);
}

void chucNang2(int n) {
    int tong = 0;
    int i;
    for(i = 1; i < n + 1; i++) {
        tong += i;
    }
    printf("Tổng của các số từ 1 đến n là: %d \n", tong);
}
void chucNang3() {
    int soLop;
    printf("Vui lòng nhập số lớp: ");
    scanf("%d", &soLop);
    int soLuongSVCacLop[soLop];
    int i;
    for(i = 0; i < soLop; i++) {
        printf("Vui lòng nhập số sinh viên của lớp %d: ", i + 1);
        scanf("%d", &soLuongSVCacLop[i]);
    }

    // Số lượng các lớp
    printf("Số lượng các lớp là: %d\n", soLop);

    // Liệt kê vị trí các lớp có số lượng SV nhỏ hơn 30
    for(i = 0; i < soLop; i++) {
        if(soLuongSVCacLop[i] < 30) {
            printf("Lớp %d có số lượng sinh viên < 30\n", i + 1);
        }
    }

    // Vị trí các lớp có kích cỡ sinh viên nhỏ nhất
    // Bước 1: Tìm lượng sinh viên của lớp nhỏ nhất
    int soLuongSVBeNhat = soLuongSVCacLop[0];
    for(i = 0; i < soLop; i++) {
        if(soLuongSVBeNhat > soLuongSVCacLop[i]) {
            soLuongSVBeNhat = soLuongSVCacLop[i];
        }
    }
    // Bước 2: Tìm các lớp có số lượng sinh viên bé nhất
    for(i = 0; i < soLop; i++) {
        if(soLuongSVBeNhat == soLuongSVCacLop[i]) {
            printf("Lớp %d có số lượng sinh viên bé nhất\n", i + 1);
        }
    }
}
int main() {
    printf("+--------------------------Menu------------------------+\n");
    printf("1. Nhập thông tin cá nhân\n");
    printf("2. Tính tổng \n");
    printf("3. Thông tin sinh viên các lớp\n");
    printf("0. Thoát\n");
    printf("+--------------------------------------------------------+\n");

    int luaChon = 0;
    do {
        printf("Vui lòng nhập lựa chọn: ");
        scanf("%d", &luaChon);
        // Đặt getchar() để nuốt ký tự \n
        getchar();
        switch(luaChon) {
            case 1: {
                chucNang1();
                break;
            }
            case 2: {
                int n;
                printf("Vui lòng nhập số n: ");
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
            default: {
                printf("Vui lòng nhập các lựa chọn từ 0 - 3\n");
                break;
            }
        }
    } while(luaChon != 0);
}