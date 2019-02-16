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
        int now;
        cin >> now;
        int size = deq.size();
        int index = 1;

        for (iter = deq.begin(); iter < deq.end(); iter++) {
            if (*iter == now)break;
            index++;
        }

        int left = index - 1;
        int right = size - index +1;
        if (left < right){
            for (int i = 1; i <= left; ++i) {
                deq.push_back(deq.at(0));
                deq.pop_front();
                count++;
            }
            deq.pop_front();
        } else {
            for (int i = 1; i <= right; ++i) {
                deq.push_front(deq.at(size-1));
                deq.pop_back();
                count++;
            }
            deq.pop_front();
        }
    }
    cout << count << endl;

    return 0;
}