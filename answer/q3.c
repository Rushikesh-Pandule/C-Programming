#include <stdio.h>

int main() {
    char str[] = "Hello";
    int count = 0;

    // Iterate through the string until null terminator is encountered
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("Number of characters in the string \"%s\": %d\n", str, count);

    return 0;
}
