//find smallest in array using pointers create dynamically allocted array//


#include <stdio.h>
#include <stdlib.h>


int smallest(int* a,int n){
    int small=*a;
    for(int i=1;i<n;i++){
      if((*(a+i))<small){
        small=*(a+i);
      }
    }
    return small;

}

int main() {
    int n;
    int* a;
    printf("enter n\n");
    scanf("%d",&n);
    a=calloc(n,sizeof(int));
    printf("enter elements of array\n");
    for (int i = 0; i < n; i++) {
        scanf("%d",(a+i)); 
    }
    for (int i = 0;i < n;i++) {
        printf("%d\n",a[i]); 
    }
    int r=smallest(a,n);
    printf("\nsmallest in array is %d\n",r);

    

    return 0;

}