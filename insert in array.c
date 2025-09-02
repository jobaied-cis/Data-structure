#include <stdio.h>

int main() {
    int arr[100], n, pos, value, i;

    // User inputs array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // User inputs array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // User inputs position and value
    printf("Enter the position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Validate position
    if(pos < 1 || pos > n+1) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements to the right
    for(i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    // Insert value
    arr[pos-1] = value;
    n++; // increase array size

    // Print updated array
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

