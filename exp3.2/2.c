#include <stdio.h>
void main() {
    int num;
    printf("enter number for table:");
    scanf("%d",&num);
    for (int i=1;i<=10;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
}