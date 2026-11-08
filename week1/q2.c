#include <stdio.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int count = 0;
    count++;
    if (n == 1) {
        printf("*");
    } else {
        for (int i = 1; i <= n; i++) {
            count++;
            for (int j = 1; j <= n; j++) {
                count++;
                count++;
                count++;
                break;
            }
            count++;
        }
        count++;
    }
    printf("%d", count);
    return 0;
}
