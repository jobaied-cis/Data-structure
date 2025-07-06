#include <stdio.h>

int main() {
    int stack[5] = {10, 20, 30};  // Example pre-filled stack
    int top = 2;                  // Current top is at index 2 (value = 30)
    int MAXSIZE = 5;

    // Step 1: Check if stack is empty
    if (top == -1) {
        printf("Stack is Underflow\n");
    } else {
        // Step 2: Set top element to NULL (0 is used here since there's no NULL for int)
        stack[top] = 0;

        // Step 3: Decrease top
        top = top - 1;

        printf("Element popped successfully.\n");
        printf("New Top = %d\n", top);
    }

    // Step 4: Display final stack
    printf("Current Stack:\n");
    for (int i = 0; i <= top; i++) {
        printf("stack[%d] = %d\n", i, stack[i]);
    }

    return 0;
}

