#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string text1;
    string text2;
    int dp[1001][1001] = {0};

    cin >> text1;
    cin >> text2;

    text1 = "0" + text1;
    text2 = "0" + text2;

    int i ,j;

    for (i = 1; i < text1.length(); ++i) {
        for (j = 1; j < text2.length(); ++j) {
            dp[i][j] = max({dp[i][j-1], dp[i-1][j], dp[i-1][j-1] + (text1[i] == text2[j])});
        }
    }

    printf("%d", dp[i-1][j-1]);

    return 0;
}