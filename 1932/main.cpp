#include <iostream>

using namespace std;

int MAX(int a, int b){
    return a > b ? a : b;
}

int main() {
    int triangle[501][501] = {0};
    int n;
    int k = 1;
    int max = 0;
    cin >> n;

    while (k <= n) {
        for (int j = 1; j <= k; j++) {
            cin >> triangle[k][j];
        }
        k++;
    }

    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (j == 1){
                triangle[i][j] += triangle[i-1][j];
            } else if (j == i) {
                triangle[i][j] += triangle[i - 1][j - 1];
            } else {
                triangle[i][j] += MAX(triangle[i-1][j-1], triangle[i-1][j]);
            }
        }
    }

    for (int k = 1; k <= n; ++k) {
        max = MAX(max, triangle[n][k]);
    }
    printf("%d", max);
}