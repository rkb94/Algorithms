#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> deq;
    deque<int>::iterator iter;

    int N, M;
    cin >> N >> M;

    for (int i = 1; i <=N; ++i) {
        deq.push_back(i);
    }

    int count = 0;
    for (int j = 0; j < M; ++j) {
        int now; // 지금 찾으려는 입력 된 값
        cin >> now;
        int size = deq.size();
        int index = 1; // 처음 선택되어 있는 인덱스..

        for (iter = deq.begin(); iter < deq.end(); iter++) {
            if (*iter == now)break;
            index++;
        }

        int left = index - 1; // 왼쪽으로 접근했을 때 얼마나 먼가?
        int right = size - index +1; // 오른쪽으로 접근했을 때 얼마나 먼가?
        if (left < right){ // 둘이 비교했을 때 뭐가 더 가까운가?
            for (int i = 1; i <= left; ++i) { // 왼쪽으로 접근했을 떄 index를 몇 번 이동해야하는지..
                deq.push_back(deq.at(0));
                deq.pop_front();
                count++;
            }
            deq.pop_front(); // deq에서 원하는 원소를 뽑아냄
        } else {
            for (int i = 1; i <= right; ++i) { // 오른 쪽으로 접근했을 때 index를 몇 번 이동해야 하는지..
                deq.push_front(deq.at(size-1));
                deq.pop_back();
                count++;
            }
            deq.pop_front(); // deq에서 원하는 원소를 뽑아냄
        }
    }
    cout << count << endl;

    return 0;
}