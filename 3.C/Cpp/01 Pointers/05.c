#include <stdio.h>

int main() {
    int arr[] = {12, 24, 36, 48, 60};

    int* ptr = arr;

    printf("Position one: %d\n", *ptr);  // Output: 12

    for (int i = 0; i < 5; i++) {
        printf("%d\t", *ptr);
        printf("%p\t", ptr);
        ptr++;
    }
    // Output: 
    
}