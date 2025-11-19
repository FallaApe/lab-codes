#include <stdio.h>
void main() {
    int m,n;
    printf("enter rows and column for 1st array: ");
    scanf("%d%d",&m,&n);
    int matrix1[m][n];
    printf("enter elemnets of matrix: ");
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            scanf("%d",&matrix1[i][j]);
        }
    }
    int p,q;
    printf("enter rows and columns for sencond array: ");
    scanf("%d%d",&p,&q);
    int matrix2[p][q];
    printf("enter value: ");
    for (int i=0;i<p;i++) {
        for (int j=0;j<q;j++) {
            scanf("%d",&matrix2);
        }
    }
    int matrix3[m][q];
    if (n == p) {
        for (int i=0;i<m;i++) {
            for (int j=0;j<q;j++) {
                matrix3[m][q]=0;
                for (int k=0;k<n;k++) {
                    matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
    }

    printf("result\n");
    for (int i=0;i<m;i++) {
        for (int j=0;j<q;j++){
            printf("%d\t", matrix3[i][j]);
        }
        printf("\n");
    }
    
}