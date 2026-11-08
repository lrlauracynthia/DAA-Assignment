#include <stdio.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int rev = 0, rem;
    int count = 0;
    while (n != 0) {
        count++;
        rem = n % 10;
        count++;
        rev = rev * rem;
        count++;
        n = n / 10;
        count++;
    }
    count += 3;
    printf("%d", count);
    return 0;
}
