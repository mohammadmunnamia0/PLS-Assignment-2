#include <stdio.h>

enum Day {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main() {
    enum Day today = Tuesday;

    if (today == Tuesday) {
        printf("\n It's Tuesday!\n");
    }
    return 0;
}
