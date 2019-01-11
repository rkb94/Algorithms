#include <stdio.h>

int main(){
    int i, j, min, index, temp; // i는 가장 앞에 있는 값, j 배열에 있는 원소들을 반복해서 사용하기 위
    // min은 최소값을 의미, index는 가장 작은 원소가 존재하는 위치, temp는 원소를 서로 교체하기 위해 필요한 변

    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for (i = 0; i < 10; i++){
        min = 9999; // min값은 항상 최소값을 넣어야 하기 때문에 초기값으로 큰 갑을 넣어준다.
        for(j = i; j < 10; j++){
            if(min > array[j]){
                min = array[j];
                index = j;
            }
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp; // swap..
    }
    for(i = 0; i < 10; i++){
        printf("%d", array[i]);
    }
    return 0;
}