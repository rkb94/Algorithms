#include <string>
#include <vector>

int student[30] = { 0, };

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    for(int i = 0; i < n; i++){
        student[i] = 1;
    }
    
    for(int i = 0; i < lost.size(); i++){
        student[lost[i]]--;
    }
    
    for(int i = 0; i < reserve.size(); i++){
        student[reserve[i]]++;
    }
    
    for(int i = 0; i < n; i++){
        if(student[i] < 1 && i > 0 && student[i-1] > 1){
            student[i-1]--;
            student[i]++;
        } else if(student[i] < 1 && i < n && student[i+1] > 1){
            student[i+1]--;
            student[i]++;
        }
    }
    for(int i = 0; i < n; i++){
        if(student[i] > 0){
            answer++;
        }
    }
    return answer;
}