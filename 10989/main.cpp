#include <iostream>
#include <stdio.h>

int number;
int count[10001];

int main(){
    scanf("%d", &number);
    for(int i = 0; i < number; i++){
        int data;
        scanf("%d", &data);
        count[data]++;
    }
    for(int i = 0; i < 10001; i++){
        while(count[i] != 0){
            printf("%d\n", i);
            count[i]--;
        }   
    }    
}