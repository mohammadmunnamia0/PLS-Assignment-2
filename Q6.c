#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    data.i = 10;
    printf("\n\n Data as integer: %d\n", data.i);

    data.f = 220.5;
    printf("Data as float: %.2f\n", data.f);

    snprintf(data.str, sizeof(data.str), "The Wonder of, AI!");
    printf("Data as string: %s\n", data.str);

    return 0;
}
