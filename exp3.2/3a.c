#include <stdio.h>
void main() {
    int i, j, n, num = 1;
    for (i = 1; i <= 3; i++) {
        for (n = 1; n <= 3 - i; n++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}
