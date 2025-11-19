#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
    int limit = 5000;
    int max = (int)cbrt(limit) + 1;
    int *counts = calloc(limit + 1, sizeof(int));
    int a, b, s;
    for (a = 1; a <= max; a++)
        for (b = a; b <= max; b++) {
            s = a*a*a + b*b*b;
            if (s > limit) break;
            counts[s]++;
        }
    for (s = 1; s <= limit; s++)
        if (counts[s] >= 2) printf("%d\n", s);
    free(counts);
}
