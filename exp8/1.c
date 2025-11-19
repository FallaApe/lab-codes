#include <stdio.h>
struct complex {
    float real;
    float imag;
};

void main() {
    struct complex num1,num2,sum;
    printf("enter real and imaginary part for number 1: ");
    scanf("%f%f",&num1.real,&num1.imag);
    printf("%.2f + %.2fi\n",num1.real,num1.imag);
    printf("enter real and imaginary part for number 2: ");
    scanf("%f%f",&num2.real,&num2.imag);
    printf("%.2f + %.2fi\n",num2.real,num2.imag);
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    printf("sum = %.2f + %.2fi",sum.real,sum.imag);
    
}
