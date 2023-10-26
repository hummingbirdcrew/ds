// implement a c program multiply two matrices//

#include <stdio.h>
#include <stdlib.h>

void matrixmultyply(int a[10][10],int b[10][10],int c[10][10],int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            c[i][j]=0;
            for (int k = 0; k < n; k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            
        }
    }
}
printf("resultant matrix after multiplucation\n");
for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
        printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    int a[10][10],b[10][10],c[10][10];
    printf("enter n\n");
    scanf("%d",&n);
    printf("enter elements of matrix 1\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
        scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements of matrix 2\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
        scanf("%d",&b[i][j]);
        }
    }
    printf("printing elements of matrix 1\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("printing elements of matrix 2\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
        printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    matrixmultyply(a,b,c,n);

    return 0;
}
    