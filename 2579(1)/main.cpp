#include <iostream>

using namespace std;


int main() {
    int n;
    int input[301];
    int dp[301][3] = {0};

    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> input[i];
    }

    // 현재 계단과 바로 전 계단은 밟을 수 있지만, 전전계단, 전계단을 밟고나서 현재 계단을 밟을 수 없다는 조건
    // dp를 2차원 배열로 잡아야 한다.
    // dp[i][j] -> i번째 계단에서 바로 전 계단이 j번 밟힌 경우
    // ex) dp[4][1] -> 4번째 계단만 밟음
    //     dp[4][2] -> 3번째 계단을 밟고 4번째 계단을 밟음
    dp[2][1] = input[2];
    dp[2][2] = input[1] + input[2];
    dp[1][1] = input[1];

    for (int i = 3; i <= n; i++)
    {
        dp[i][1] = max(dp[i - 2][1],dp[i - 2][2]) + input[i];
        // 2칸을 건너올 경우 위의 조건에 만족하기 때문에 건너오기 전에 있던 계단까지의 합 중 가장 큰 값에 현재 계단의 값을 더한다.
        dp[i][2] = input[i] + input[i - 1] + max(dp[i - 3][1] ,dp[i - 3][2]);
        // 1칸을 건너올 경우 이 조건에서는 무조건 앞 전에 2칸을 건너왔기 때문에 3칸 전의 계단의 합을 비교해줘야 한다.(위 조건에서 세번 연속으로 모두 밟을 수 없기 때문에)
    }

    cout << max(dp[n][1], dp[n][2]) << endl;
}

