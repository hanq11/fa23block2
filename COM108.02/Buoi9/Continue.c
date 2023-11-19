#include <stdio.h>
int main() {
    printf("Demo continue voi for \n");
    int i, j = 0;
    for(i = 0; i < 5; i++) {
        if(i == 3) {
            continue;
        }
        printf("%d \n", i);
    }
    printf("Demo continue voi while \n");
    while(j < 5) {
        if(j == 2) {
            j++;
            continue;
        }
        printf("%d \n", j);
        j++;
    }
}