#include <iostream>
#include <algorithm>

using namespace std;

int n;
int input[301];
int dp[301][3];

int main() {
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> input[i];
    }

    dp[2][1] = input[2];
    dp[2][2] = input[1] + input[2];
    dp[1][1] = input[1];

    for (int i = 3; i <= n; i++)
    {
        dp[i][1] = max(dp[i - 2][1],dp[i - 2][2]) + input[i];
        dp[i][2] = input[i] + input[i - 1] + max(dp[i - 3][1] ,dp[i - 3][2]);
    }

    cout << max(dp[n][1], dp[n][2]) << endl;
}

