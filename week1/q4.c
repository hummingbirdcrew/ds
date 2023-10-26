// find the second largest number using function without sorting //

#include <stdio.h>
#include <stdlib.h>

void secondlargest(int a[100],int n){
    int large=a[0];
    int seclarge=a[0];
    for(int i=1;i<n;i++){
      if(a[i]>large){
        seclarge=large;
        large=a[i];
      }
      else if(a[i]>seclarge && a[i]<large){
        seclarge=a[i];
        }
    }
    printf("second largest element is %d \n",seclarge);
}




int main() {
    int n;
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
    secondlargest(a,n);

    return 0;

}