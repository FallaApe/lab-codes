#include <stdio.h>
int g = 10;
int test() {
    int l = 20;
    printf("Local in test: %d\n", l);
    printf("Global in test: %d\n", g);
    return 0;
}
void main() {
    test();
    printf("Global in main: %d\n", g);
}