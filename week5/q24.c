#include <stdio.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int k;
    if (scanf("%d", &k) != 1) return 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long difference = (long long)arr[j] - arr[i];
            if (difference == k || difference == -(long long)k) {
                printf("1\n");
                return 0;
            }
        }
    }
    printf("0\n");
    return 0;
}
