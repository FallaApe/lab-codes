#include <stdio.h>
void main() {
    int age;
    printf("enter age: ");
    scanf("%d",&age);
    char name[100];
    printf("enter name: ");
    scanf("%s",&name);
    printf("name is %s, age is %d",name,age);
}