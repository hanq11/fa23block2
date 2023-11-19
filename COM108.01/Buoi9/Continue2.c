#include <stdio.h>

int main() {
    int i = 0;
    while(i < 10) {
        if(i == 7) {
            continue;
        }
        printf("%d \n", i);
    }
    return 0;
}