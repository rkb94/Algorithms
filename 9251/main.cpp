#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string text1;
    string text2;
    int dp[1001][1001] = {0};

    cin >> text2;
    cin >> text1;

    text1 = "0" + text1;
    text2 = "0" + text2;

    int i ,j;

    for (i = 1; i < text1.length(); ++i) {
        for (j = 1; j < text2.length(); ++j) {
            if (text1[i] == text2[j]){
                dp[i][j] = dp[i-1][j-1] + 1;
            } else {
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
//            dp[i][j] = max({dp[i][j-1], dp[i-1][j], dp[i-1][j-1] + (text1[i] == text2[j])});
            //  이것도 맞는 내용.. 간결하게 코드를짜자..
        }
    }

    printf("%d", dp[i-1][j-1]);

    return 0;
}