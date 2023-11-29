#include <stdio.h>

int main() {
    int array[5] = {6, 8, 4, 2, 9};
    int i, j, temp;
    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            if(array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for(i = 0; i < 5; i++) {
        printf("%d  ", array[i]);
    }
}