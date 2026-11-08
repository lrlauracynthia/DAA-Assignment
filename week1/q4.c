#include <stdio.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int c = 0;
    int count = 2;
    for (int i = n / 2; i < n; i++) {
        count++;
        for (int j = 1; j < n; j *= 2) {
            count++;
            for (int k = 1; k < n; k *= 2) {
                count++;
                c++;
                count++;
            }
            count++;
        }
        count++;
    }
    printf("%d", count);
    return 0;
}
