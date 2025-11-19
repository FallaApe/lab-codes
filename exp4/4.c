#include <stdio.h>
int test() {
    static int s = 0;
    s++;
    printf("Static variable: %d\n", s);
    return 0;
}
void main() {
    test();
    test();
    test();
}