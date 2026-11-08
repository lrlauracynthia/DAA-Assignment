#include<stdio.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int count = 0, candidate = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) candidate = arr[i];
        count += (arr[i] == candidate) ? 1 : -1;
    }
    printf("%d", candidate);
    return 0;
}
