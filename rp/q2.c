#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int sum = 0;
    int i;

    // Calculate the sum of all elements in the array
    for (i = 0; i < 5; i++) {
        sum += array[i];
    }

    // Print the sum
    printf("Sum of array elements: %d\n", sum);

    return 0;
}
