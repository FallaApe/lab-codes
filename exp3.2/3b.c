#include <stdio.h>
void main() {
    int i, j, n, val;
    for (i = 0; i < 5; i++) {
        for (n = 1; n <= 5 - i; n++) {
            printf(" ");
        }
        val = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }
}
