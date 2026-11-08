#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int k;
    if (scanf("%d", &k) != 1) return 0;
    int i = 0, j = 1;
    while (i < n && j < n) {
        if (i == j) {
            j++;
            continue;
        }
        long long difference = (long long)arr[j] - arr[i];
        if (difference == k) {
            printf("1\n");
            return 0;
        }
        if (difference < k) {
            j++;
        } else {
            i++;
        }
    }
    printf("0\n");
    return 0;
}
