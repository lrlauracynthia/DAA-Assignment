#include <stdio.h>
#include <stdlib.h>
int compare_desc(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x < y) - (x > y);
}
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int calories[n];
    for (int i = 0; i < n; i++) scanf("%d", &calories[i]);
    qsort(calories, n, sizeof(int), compare_desc);
    long long distance = 0, power = 1;
    for (int i = 0; i < n; i++) {
        distance += (long long)calories[i] * power;
        power *= n;
    }
    printf("%lld\n", distance);
    return 0;
}
