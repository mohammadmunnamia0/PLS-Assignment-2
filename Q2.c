#include <stdio.h>
#include <string.h>

int main() {
    // 1. String Declaration and Initialization
    char str1[50] = "Mohammad Munna";
    char str2[] = " Mia";
    
    // 2. String Concatenation
    strcat(str1, str2);  // str1 now contains "Hello World"
    printf("\n Concatenated String: %s\n", str1);
    
    // 3. String Length
    int length = strlen(str1);  // Length of "Hello World"
    printf("Length of String: %d\n", length);

    // 4. String Comparison
    if (strcmp(str1, "Hello World") == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    // 5. Substring Extraction (Simple example)
    char subStr[6];
    strncpy(subStr, str1, 5);  // Copy first 5 characters from str1 to subStr
    subStr[5] = '\0';  // Null terminate the substring
    printf("Substring: %s\n", subStr);  // Output: Hello
    
    // 6. String Copy
    char str3[50];
    strcpy(str3, str1);  // Copy "Hello World" to str3
    printf("Copied String: %s\n", str3);

    return 0;
}
