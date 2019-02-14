#include <iostream>
#include <vector>
#include <algorithm>
#include <main.h>

using namespace std;
string words[20000]; // 조건 20000개의 단어를 저장할 string 배열 생성
int number;

bool compare(string a, string b){ // 정렬에 필요한 비교함수 생성
    if (a.length() < b.length()) { // 길이를 비교해 짧으면 참인 1을 반환
        return 1;
    } else if (a.length() > b.length()) { // a가 더 길면 0
        return 0;
    } else { // 같을 경우에는 사전 순이기때문에 자동으로 사전 순으로 비교해준다.
        return (a.compare(b) < 0); // 자동으로 사전 순으로 비교해줌
    }
}

int main(){
    cin >> number; // 입력할 갯수 입력
    for(int i = 0; i < number; i++){
        cin >> words[i]; // 입력한 갯수만 큼 단어를 저장
    }
    sort(words, words + number, compare); // 저장한 단어들은 compare를 통해서 정렬된다.

    for(int i = 0; i < number; i++)
    {
        if (i > 0 && words[i] == words[i-1]) { // 정렬되어 저장 된 단어들에 중복이 있을 경우는 출력하지 않는다.
            continue;
        } else{
            cout << words[i] << '\n'; // 출력 진행
        }
    }
    return 0;
}