#include <stdio.h>
int main(void) {
    int tests;
    if (scanf("%d", &tests) != 1) return 0;
    while (tests--) {
        int n1, n2;
        if (scanf("%d", &n1) != 1 || n1 < 0) return 0;
        int first[n1 > 0 ? n1 : 1];
        for (int i = 0; i < n1; i++) scanf("%d", &first[i]);
        if (scanf("%d", &n2) != 1 || n2 < 0) return 0;
        int second[n2 > 0 ? n2 : 1];
        for (int i = 0; i < n2; i++) scanf("%d", &second[i]);
        int first_output = 1;
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                if (first[i] == second[j]) {
                    if (!first_output) printf(" ");
                    printf("%d", first[i]);
                    first_output = 0;
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
