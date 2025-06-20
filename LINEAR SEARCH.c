#include <stdio.h>

int main() {
    int A[100], n, Svalue, i, found = 0;

    // Step 2: Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Step 3: Check for empty array
    if (n == 0) {
        printf("Array is empty / Searching is not possible.\n");
        return 0;
    }

    // Step 4: Input elements
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Step 5: Input search value
    printf("Enter the value to search: ");
    scanf("%d", &Svalue);

    // Step 6–7: Linear search loop
    for (i = 0; i < n; i++) {
        if (A[i] == Svalue) {
            printf("Value is found at position %d (index %d).\n",i+1,i);
            found = 1;
            break;
        }
    }

    // Step 8: Value not found
    if (!found) {
        printf("Value is not found in the array.\n");
    }

    return 0;
}
