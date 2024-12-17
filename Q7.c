#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10;
    int *ptr = &a;

    printf("\n\n Value of a: %d\n", *ptr); // Dereferencing pointer

    int *dynamicPtr = (int*) malloc(sizeof(int));
    *dynamicPtr = 20;
    printf("Dynamically allocated value: %d\n", *dynamicPtr);
    free(dynamicPtr);

    return 0;
}
