#include <stdio.h>
int arr[100];
void quicksort(int low, int high) {
    if (low >= high) return;
    int i = low, j = high, pivot = arr[low];
    while (i < j) {
        while (arr[i] <= pivot && i < high) i++;
        while (arr[j] > pivot) j--;
        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    arr[low] = arr[j];
    arr[j] = pivot;
    quicksort(low, j - 1);
    quicksort(j + 1, high);
}
int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0 || n > 100) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    quicksort(0, n - 1);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
