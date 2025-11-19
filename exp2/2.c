#include <stdio.h>
void main() {
    float c;
    printf("enter temp in celsius: ");
    scanf("%f",&c);
    float f = (c*9/5)+32;
    printf("temp in fahrenheit is %f",f);
}