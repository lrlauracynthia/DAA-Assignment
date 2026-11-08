#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}
int main(void) {
    int n, m;
    if (scanf("%d", &n) != 1) return 0;
    int greed[n];
    for (int i = 0; i < n; i++) scanf("%d", &greed[i]);
    if (scanf("%d", &m) != 1) return 0;
    if (m == 0) {
        printf("0\n");
        return 0;
    }
    int cookies[m];
    for (int i = 0; i < m; i++) scanf("%d", &cookies[i]);
    qsort(greed, n, sizeof(int), compare);
    qsort(cookies, m, sizeof(int), compare);
    int child = 0, cookie = 0;
    while (child < n && cookie < m) {
        if (cookies[cookie] >= greed[child]) child++;
        cookie++;
    }
    printf("%d\n", child);
    return 0;
}
