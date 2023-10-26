//find the sum of all the elements of an 1d double araay of size n using function add.the values in array are read from keyborad//


#include <stdio.h>
#include <stdlib.h>

double add(double a[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + a[i];
    }
    return sum;
}

int main() {
    int n;
    double a[100];
    printf("enter n\n");
    scanf("%d",&n);
    printf("enter elements of array\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf",&a[i]); 
    }
    for (int i = 0;i < n;i++) {
        printf("%lf\n",a[i]); 
    }
    double sol = add(a, n);
    printf("sum of all elements is %lf",sol); 

    return 0;
}
