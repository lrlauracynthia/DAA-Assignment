#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int *arr = malloc((size_t)n * sizeof(*arr));
    int *dp = malloc((size_t)n * sizeof(*dp));
    if (arr == NULL || dp == NULL) {
        free(arr);
        free(dp);
        return 1;
    }
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int max_len = 0;
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] >= arr[j] && dp[j] + 1 > dp[i]) {
                dp[i] = dp[j] + 1;
            }
        }
        if (dp[i] > max_len) max_len = dp[i];
    }
    printf("%d\n", max_len);
    free(dp);
    free(arr);
    return 0;
}
