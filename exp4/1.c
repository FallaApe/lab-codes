#include <stdio.h>
int g = 10;
int test() {
    printf("Global in test: %d\n", g);
    return 0;
}
void main() {
    printf("Global in main: %d\n", g);
    test();
}
