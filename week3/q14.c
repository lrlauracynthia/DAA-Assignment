#include <stdio.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int x;
    if (scanf("%d", &x) != 1) return 0;
    int found = 0;
    for (int i = 0; i < n && !found; i++) {
        int target = x - arr[i];
        int low = i + 1, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) {
                printf("%d\n%d\n", arr[i], arr[mid]);
                found = 1;
                break;
            } else if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    if (!found) printf("No");
    return 0;
}
