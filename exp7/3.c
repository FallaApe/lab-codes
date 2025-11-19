#include <stdio.h>

void modify(int *x, int *y);

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before modification: a = %d, b = %d\n", a, b);
    modify(&a, &b);

    printf("After modification: a = %d, b = %d\n", a, b);
    return 0;
}

void modify(int *x, int *y) {
    *x+=1;
    *y*=2;
}
