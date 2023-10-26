// implement a lsearch function in 1d using linear search//

#include <stdio.h>
#include <stdlib.h>

void lsearch(int a[],int n,int element){
    int found=0;
 for (int i = 0; i < n; i++) {
    if(a[i]==element){
        printf("element is found at %d position of array",i);
        found=1;
        break;
    }
    
 }
 if(found=0){
        printf("elemant is not in array");
    }
}


int main() {
    int n,element;
    int a[100];
    printf("enter n\n");
    scanf("%d",&n);
    printf("enter elements of array\n");
    for (int i = 0; i < n; i++) {
        scanf("%d",&a[i]); 
    }
    for (int i = 0;i < n;i++) {
        printf("%d\n",a[i]); 
    }
    printf("enter element");
    scanf("%d",&element);
    lsearch(a,n,element);


    return 0;

}