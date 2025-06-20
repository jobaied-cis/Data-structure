#include <stdio.h>

int main() {
    int A[100], n, Svalue;
    int BEG, END, MID, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Array is empty.\n");
        return 0;
    }

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &Svalue);

    BEG = 0;
    END = n - 1;

    while (BEG <= END) {
        MID = (BEG + END) / 2;

        if (A[MID] == Svalue) {
            printf("Value is found at position %d (index %d).\n", MID + 1, MID);
            found = 1;
            break;
        }
        else if (A[MID] > Svalue) {
            END = MID - 1;
        }
        else {
            BEG = MID + 1;
        }
    }

    if (!found) {
        printf("Value is not found.\n");
    }

    return 0;
}

