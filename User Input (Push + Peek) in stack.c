#include <stdio.h>
#define MAX 5

int main() {
    int stack[MAX];
    int top = -1;
    int n, value;

    // Ask how many values to push
    printf("How many values do you want to push (max %d)? ", MAX);
    scanf("%d", &n);

    // Push values from user input
    for (int i = 0; i < n; i++) {
        if (top == MAX - 1) {
            printf("Stack is Overflow\n");
            break;
        } else {
            printf("Enter value to push: ");
            scanf("%d", &value);
            top++;
            stack[top] = value;
        }
    }

    // Peek operation
    if (top == -1) {
        printf("Stack is empty, nothing to peek\n");
    } else {
        printf("Top element is: %d\n", stack[top]);
    }

    return 0;
}

