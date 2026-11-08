#include <stdio.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int low = 0, high = n - 1, first_zero = n;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == 0) {
            first_zero = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    printf("%d", n - first_zero);
    return 0;
}
