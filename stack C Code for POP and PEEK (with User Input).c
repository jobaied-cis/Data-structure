#include <stdio.h>
#define MAX 5

int main() {
    int stack[MAX];
    int top = -1;
    int n, value;

    // Step 1: Push elements from user
    printf("How many values do you want to push (max %d)? ", MAX);
    scanf("%d", &n);

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

    // Step 2: Pop operation
    if (top == -1) {
        printf("Stack is Underflow — nothing to pop\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        stack[top] = 0;  // Optional: clear it
        top--;
    }

    // Step 3: Peek operation
    if (top == -1) {
        printf("Stack is now empty, nothing to peek\n");
    } else {
        printf("Top element after pop: %d\n", stack[top]);
    }

    return 0;
}

