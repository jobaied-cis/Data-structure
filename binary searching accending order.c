#include <stdio.h>
int main()
{
    int n, value, beg, end, mid, result = -1;
    // Read the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // If the array is empty, output a message and exit
    if (n == 0)
    {
        printf("Array is empty\n");
        return 0;
    }
    // Declare and input array elements
    int arr[n];
    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Read the search value
    printf("Enter the value to search: ");
    scanf("%d", &value);

    // Initialize the binary search bounds
    beg = 0;
    end = n - 1;
    // Perform binary search
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        // If value is found at mid
        if (arr[mid] == value)
        {
            result = mid;
            break;  // Exit the loop if value is found
        }
        // If value is greater than mid, ignore the left half
        else if (arr[mid] < value)
        {
            beg = mid + 1;
        }
// If value is smaller than mid, ignore the right half
        else
        {
            end = mid - 1;
        }
    }
    // Output the result
    if (result == -1)
    {
        printf("Value is not found\n");
    }
    else
    {
        printf("Value is found at index %d\n", result);
    }
    return 0;
}

