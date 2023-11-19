#include <stdio.h>
int main() {
    printf("Demo break voi for \n");
    int i, j = 0;
    for(i = 0; i < 5; i++) {
        if(i == 3) {
            break;
        }
        printf("%d \n", i);
    }
    printf("Demo break voi while \n");
    while(j < 5) {
        if(j == 4) {
            break;
        }
        printf("%d \n", j);
        j++;
    }
}