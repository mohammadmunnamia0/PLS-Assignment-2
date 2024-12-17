#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;

    cout << " \n\n Value of a: " << *ptr << endl; // Dereferencing pointer

    // Dynamically allocate memory for an integer
    int *dynamicPtr = new int;
    *dynamicPtr = 20;
    cout << "Dynamically allocated value: " << *dynamicPtr << endl;

    delete dynamicPtr;  // Free dynamically allocated memory

    return 0;
}
