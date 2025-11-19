#include <stdio.h>
int test() {
    {
        int x = 50;
        printf("Block variable: %d\n", x);
    }
    return 0;
}
void main() {
    test();
}