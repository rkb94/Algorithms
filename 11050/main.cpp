#include <iostream>

using namespace std;

int Factorial(int num){
    if (num == 1 or num == 0){
        return 1;
    } else {
        return Factorial(num - 1) * num;
    }
}

int main() {
    int N, K;
    cin >> N >> K;

    cout << Factorial(N) / (Factorial(K) * Factorial(N-K)) << endl;
}