#include <stdio.h>
#include <stdlib.h>
int compare_asc(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}
int compare_desc(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x < y) - (x > y);
}
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int a[n], b[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    qsort(a, n, sizeof(int), compare_asc);
    qsort(b, n, sizeof(int), compare_desc);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (long long)a[i] * b[i];
    }
    printf("%lld", sum);
    return 0;
}
