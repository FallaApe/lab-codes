#include <stdio.h>
void main() {
    int x1,y1,x2,y2,x3,y3;
    printf("enter points x1,y1:");
    scanf("%d%d",&x1,&y1);
    printf("enter points x1,y2:");
    scanf("%d%d",&x2,&y2);
    printf("enter points x3,y3:");
    scanf("%d%d",&x3,&y3);

    float a1=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));

    if (a1==0) {
        printf("the points are collinear");
    }
    else {
        printf("the points are not collinear");
    }
}