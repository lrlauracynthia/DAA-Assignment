#include <stdio.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 0) {
        printf("0\n");
        return 0;
    }
    if (n <= 2) {
        printf("1\n");
        return 0;
    }
    long long dp[n + 1];
    dp[0] = dp[1] = dp[2] = 1;
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 3];
    }
    printf("%lld\n", dp[n]);
    return 0;
}
