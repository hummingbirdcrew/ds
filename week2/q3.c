// demonstate passing pointers to function and retuning pointer from function using pointer to pointer



#include <stdio.h>
#include <stdlib.h>

void passingpointer(int* a) {
    printf("Number through pointer is %d\n", *a);
}

int* retuningpointe(int* a) {
    return a + 2;
}

int main() {
    int a;
    int b = 2;
    int* adressofb = &b;
    int** addressof_addressofc_variable = &adressofb;

    printf("1. Passing a pointer to a function\n");
    printf("Enter a value: ");
    scanf("%d", &a);
    passingpointer(&a);

    printf("\n2. Returning a pointer from a function\n");
    int arr[5];
    printf("Enter 5 elements for the array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    int* result = retuningpointe(arr);
    printf("Pointer returned: %p\n", (void*)result);

    printf("\n3. Pointer to pointer\n");
    printf("Value of b is %d\n", b);
    printf("Address of b is %p\n", (void*)adressofb);
    printf("Address of addressofb is %p\n", (void*)addressof_addressofc_variable);

    return 0;
}
