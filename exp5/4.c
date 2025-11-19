#include <stdio.h>
void main() {
    int a,b,c,d;
    printf("rows and column: ");
    scanf("%d%d",&a,&b);
    int matrix1[a][b],matrix2[c][d];
    printf("enter elemnets of matrix: ");
    for (int i=0;i<a;i++) {
        for (int j=0;j<b;j++) {
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("enter elemnets of matrix: ");
    for (int i=0;i<a;i++) {
        for (int j=0;j<b;j++) {
            scanf("%d",&matrix2[i][j]);
        }
    }


    printf("matrix is \n");
    for (int i=0;i<a;i++) {
        for (int j=0;j<b;j++) {
            printf("%d\t",matrix1[i][j]);
            printf("%d\t",matrix1[i][j]);
        }
        printf("\n");
    }
}