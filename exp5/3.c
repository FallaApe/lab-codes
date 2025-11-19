#include <stdio.h>
void main() {
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter element: ");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int freq=0,num;
    printf("enter the number to check frequency: ");
    scanf("%d",&num);
    for (int i=0;i<n;i++) {
        if (arr[i]==num) {
            freq+=1;
        }
    }
    printf("frequency of %d is %d",num,freq);
}