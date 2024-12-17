#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p1 = {"\n\n Mohammad Munna Mia", 24};
    printf("Name: %s, Age: %d\n", p1.name, p1.age);
    return 0;
}
