#include <stdio.h>
void main() {
    int i;
    int pop = 100000;
    for (i = 1; i <= 10; i++) {
        pop = pop * 110 / 100;
        printf("Year %d: %d\n", i, pop);
    }
}
