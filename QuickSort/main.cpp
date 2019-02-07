#include <stdio.h>

int number = 10;
int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

void quickSort(int *data, int start, int end){
    if (start >= end ){ // 원소가 1개인 경우
        return;
    }

    int key = start; // 키는 첫번째 원소
    int i = start + 1; // 왼쪽 부터 하나씩 키값을 찾을 때 그 index를 의미 오른쪽으로 한 칸씩
    int j = end; // 마지막 값에서 왼쪽으로 작은 값을 찾을 때 사용
    int temp;

    while(i <= j) { // 엇갈릴 때 까지 반복
        while(data[i] <= data[key]) { // 키 값보다 큰 값을 만날 때까지 오른 쪽으로 이동시켜줌
            i++;
        }
        while(data[j] >= data[key] && j > start) { // 키 값보다 작은 값을 만날 때 까지
            j--;
        }
        if(i > j) { // 현재 엇갈린 상태면 키 값과 교체해준다.
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        } else { // 엇갈리지 않았다면 두 개의 값을 바꿔줘야한다.
            temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }
    }
    quickSort(data, start, j - 1);
    quickSort(data, j + 1, end);
}  

int main(void){
    quickSort(data, 0, number - 1);
    for(int i = 0 ; i < 10; i++){
        printf("%d", data[i]);
    }
}