#include <iostream>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int dp[1001][1001] = { 0 };

    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j <= N; ++j) {
            if (j == 0 || i == j){
                dp[i][j] = 1;
            } else {
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % 10007;
            }
        }
    }

    printf("%d", dp[N][K]);
}