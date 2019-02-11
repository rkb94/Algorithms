// #include <stdio.h>

// int main(){
//     int i, j, temp;
//     int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

//     for(i = 0; i < 9; i++){
//         j = i; // 현재 정렬할 원소를 선택해서 적절한 위치에 삽입
//         while(array[j] > array[j + 1]){ // j는 오른쪽에 있는 값과 비교해서 왼쪽에 있는 값이 더 크다면 위치를 서로 바꿔줌
//             temp = array[j];
//             array[j] = array[j + 1];
//             array[j + 1] = temp;
//             j--;
//         }
//     }

//     for(i = 0 ; i < 10; i++){
//         printf("%d", array[i]);
//     }

//     return 0;
// }

#include <stdio.h>

int main(){
    int i, j, temp;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

    for(int i = 0; i < 9; i++)
    {
        j = i;
        while(array[j] > array[j+1]){
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
            j--;
        }
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d", array[i]);
    }
    return 0;
}