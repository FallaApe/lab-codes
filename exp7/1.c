#include <stdio.h>
void main() {
    int a=10;
    float b = 4.15;
    char c = 'A';

    void *p;
    p = &a;
    printf("Value of a = %d\n", *(int*)p);
    printf("address of a = %p\n", p);
    p = &b;
    printf("Value of b = %.2f\n", *(float*)p);
    printf("address of b = %p\n", p);
    p = &c;
    printf("Value of c = %c\n", *(char*)p);
    printf("address of c = %p\n", p);
}
