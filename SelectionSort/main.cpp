#include <stdio.h>

int main(){
    int i, j, min, index, temp;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for(int i = 0; i < 10; i++){
        min = 9999;
        for(int j = i; j < 10; j++){
            if (min > array[j]) {
                index = j;
                min = array[j];
            }
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d", array[i]);
    }
    return 0;
}