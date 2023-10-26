//write a function to reverse elements of array using pointer access elements using dereference //




#include <stdio.h>
#include <stdlib.h>

void reverse(int* a,int n){
    for(int i=0;i<n/2;i++){
        int temp=*(a+i);
        *(a+i)=*(a+n-i-1);
        *(a+n-i-1)=temp;
    }

}

int main() {
    int n;
    int a[10];
    printf("enter n\n");
    scanf("%d",&n);
    printf("enter elements of array\n");
    for (int i = 0; i < n; i++) {
        scanf("%d",&a[i]); 
    }
    for (int i = 0;i < n;i++) {
        printf("%d\n",a[i]); 
    }

    reverse(a,n);
    printf("array after reverseing\n");
    for (int i = 0;i < n;i++) {
        printf("%d\n",a[i]); 
    }

    return 0;

}