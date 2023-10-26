// matrix dynammicly and acces elements using derefrence and perform matrix multiply//




#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;
    int **a=(int **)malloc(n * sizeof(int *));
    int **b=(int **)malloc(n * sizeof(int *));
    int **c=(int **)malloc(n * sizeof(int *));

    for (int i = 0; i < n; i++) {
        a[i] = (int *)malloc(n * sizeof(int));
        b[i] = (int *)malloc(n * sizeof(int));
        c[i] = (int *)malloc(n * sizeof(int));
    }

    printf("enter n\n");
    scanf("%d",&n);
    
    printf("enter elements of matrix 1\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
        scanf("%d",(*(a+i)+j));
        }
    }
    printf("enter elements of matrix 2\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
        scanf("%d",(*(b+i)+j));
        }
    }
    printf("printing elements of matrix 1\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
        printf("%d\t",*(*(a+i)+j));
        }
        printf("\n");
    }
    printf("printing elements of matrix 2\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
        printf("%d\t",*(*(b+i)+j));
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                *(*(c+i)+j)=*(*(c+i)+j)+(*(*(a+i)+k))*(*(*(b+k)+j));
            
        }
    }
}

printf("resultant matrix after multiplucation\n");
for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
        printf("%d\t",*(*(c+i)+j));
        }
        printf("\n");
    }


    return 0;
}
    