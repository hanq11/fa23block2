#include <stdio.h>

int main() {
    int i = 0;
    VONGLAP:do {
        if (i == 5) {
            i++;
            goto VONGLAP;
        }
        printf("%d \n", i);
        i++;
    } while(i < 10);
    return 0;
}