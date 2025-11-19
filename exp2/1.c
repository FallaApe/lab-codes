#include <stdio.h>
void main() {
    float len,wid;
    printf("enter length and width: ");
    scanf("%f%f",&len,&wid);
    float area = len*wid;
    float peri= (len*2)+(wid*2);
    printf("area of rectangle is %f\n",area);
    printf("perimeter of the rectangle is %f",peri);

}
