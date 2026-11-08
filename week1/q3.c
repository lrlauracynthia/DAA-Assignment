#include <stdio.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        count++;
        if (n % i == 0) {
            count++;
        }
        count++;
    }
    count++;
    printf("%d", count);
    return 0;
}
