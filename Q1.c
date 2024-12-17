#include <stdio.h>

int main() {
    // Integer
    int Value = -10;

    // Floating-point
    float pi = 3.14159f;
    double e = 2.718281828459045;

    // Boolean (using integer for representation)
    int isRaining = 1;

    // Character
    char grade = 'A';

    printf("\n Integer (Signed): %d\n", Value);

    printf("Floating-point (Float): %.5f\n", pi);
    printf("Floating-point (Double): %.15f\n", e);

    printf("Boolean Value (are you in love?): %s\n", isRaining ? "True" : "False");

    printf("Character: %c\n", grade);

    return 0;
}
