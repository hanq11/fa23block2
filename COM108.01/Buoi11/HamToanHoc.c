#include <stdio.h>
#include <math.h>

int main() {
    float a = 5, b = -5, c = 4.4;
    printf("Trị tuyệt đối của b là %f \n", fabs(b));
    printf("a mũ 3 có giá trị là %f \n", pow(a, 3));
    printf("Căn bậc 2 của a có giá trị là %f \n", sqrt(a));
    printf("Làm tròn cận trên của c là %f \n", ceil(c));
    printf("Lam tròn cận dưới của c là %f \n", floor(c));
    return 0;
}
