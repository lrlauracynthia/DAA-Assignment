#include<stdio.h>
int main(void) {
    int value;
    if (scanf("%d", &value) != 1) return 0;
    int denominations[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    int count = 0;
    for (int i = 0; i < 9; i++) {
        count += value / denominations[i];
        value %= denominations[i];
    }
    printf("%d\n", count);
    return 0;
}
