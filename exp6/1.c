#include <stdio.h>
int FACT(int num);
int fact(int n);
int main() {
    int num;
    printf("enter number: ");
    scanf("%d", &num);

    int a = FACT(num);
    printf("non recursive: %d\n", a);

    int b = fact(num);
    printf("recursive: %d\n", b);

    return 0;
}
int fact(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}
int FACT(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact = fact * i;
    }
    return fact;
}
