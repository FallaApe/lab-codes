#include <stdio.h>
void main() {
    int num;
    printf("how many numbers do u want to enter:");
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        int n;
        printf("enter number %d:",i);
        scanf("%d",&n);
        if (n>0){
            printf("%d is a positive number \n",n);
        }
        else if (n<0){
            printf("%d is a negative number\n",n);
        }
        else{
            printf("%d is zero\n",n);
        }
    }
}
