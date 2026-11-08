#include <stdio.h>
#include <string.h>
int max(int a, int b) {
    return a > b ? a : b;
}
int main(void) {
    char first[1000], second[1000];
    if (scanf("%999s %999s", first, second) != 2) return 0;
    int m = (int)strlen(first), n = (int)strlen(second);
    static int dp[1000][1000];
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (first[i - 1] == second[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    printf("%d\n", dp[m][n]);
    return 0;
}
