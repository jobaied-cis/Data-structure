#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int n, int value) {
    int beg = 0, end = n - 1, mid;

    while (beg <= end) {
        mid = (beg + end) / 2;

        // If value is found at mid
        if (arr[mid] == value) {
            return mid;  // Return index of found element
        }
        // If value is greater than mid, ignore left half
        else if (arr[mid] < value) {
            beg = mid + 1;
        }
        // If value is smaller than mid, ignore right half
        else {
            end = mid - 1;
        }
    }

    return -1;  // Return -1 if value is not found
}

int main() {
    int n, value, result;

    // Read the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // If the array is empty, output a message and exit
    if (n == 0) {
        printf("Array is empty\n");
        return 0;
    }

    // Declare and input array elements
    int arr[n];
    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the search value
    printf("Enter the value to search: ");
    scanf("%d", &value);

    // Perform binary search
    result = binarySearch(arr, n, value);

    // Output the result
    if (result == -1) {
        printf("Value is not found\n");
    } else {
        printf("Value is found at index %d\n", result);
    }

    return 0;
}

