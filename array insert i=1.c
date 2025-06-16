#include <stdio.h>
int main() {
    int n, i, j, v, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int A[n + 1]; // Make room for one more

    printf("Enter the elements:\n");
    for(i = 1; i <= n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the insert position (0 to %d): ", n);
    scanf("%d", &pos);

    printf("Enter the insert value: ");
    scanf("%d", &v);

    if(pos >n) {
        A[n+1] = v;
    } else {
        for(j = n; j > pos; j--) {
            A[j+1] = A[j];  // Shift right
        }
        A[pos+1] = v;
    }

    n++; // Increase size after insertion

    printf("Final array:\n");
    for(i = 0; i < n; i++) {
        printf("%d\n", A[i]);
    }

    return 0;
}


