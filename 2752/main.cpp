#include <stdio.h>

int array[3];

int main(void) {
    int i, j, min, index, temp;
    for(i = 0; i < 3; i++){
        scanf("%d", &array[i]);
    }
    for(i = 0; i < 3; i++){
        min = 1000001;
        for(j = i; j < 3; j++){
            if(min > array[j]){
                min = array[j];
                index = j;
            }
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }
    for(i = 0; i < 3; i++){
        printf("%d\n", array[i]);
    }
}