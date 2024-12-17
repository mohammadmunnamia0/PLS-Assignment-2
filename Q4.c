#include <stdio.h>
#include <cstdlib>


int main() {
    // Static array
    int arr[5] = {1, 2, 3, 4, 5};
    printf(" \n\nElement at index 2: %d\n", arr[2]);

    // Dynamic array
    int *dynamicArr = (int*) malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) {
        dynamicArr[i] = i + 1;
    }
    printf("Element at index 3: %d\n", dynamicArr[3]);
    free(dynamicArr);

    return 0;
}
