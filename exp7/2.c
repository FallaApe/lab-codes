#include <stdio.h>
void main() {
    int a=1000;
    char b = 's';

    int *p=&a;
    char *q=&b;

    printf("address of a before incriment: %p\n", p);
    printf("address of b before incriment: %p\n", q);

    p++;
    q++;

    printf("address of a after incriment: %p\n", p);
    printf("address of b after incriment: %p\n", q);

    p--;
    q--;

    printf("address of a after decriment: %p\n", p);
    printf("address of b after decriment: %p\n", q);
}