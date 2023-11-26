#include <stdio.h>
#include <math.h>

int main() {
    float a = 5, b = -10, c = 3.14;
    printf("Tri tuyet doi cua b la %f \n", fabs(b));
    printf("a mu 3 co gia tri la: %f \n", pow(a, 3));
    printf("Can bac 2 cua a la: %f \n", sqrt(a));
    printf("Lam tron can tren cua c la: %f \n", ceil(c));
    printf("Lam tron can duoi cua c la: %f \n", floor(c));
    return 0;
}