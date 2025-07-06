#include <stdio.h>

int main() {
    int stack[5];         // Stack array
    int top = -1;         // Initial top value
    int MAXSIZE = 5;      // Stack size
    int value;            // Value to push

    // Push 5 values into the stack
    for (int i = 0; i < 6; i++) {
        printf("Enter value to push: ");
        scanf("%d", &value);

        if (top == MAXSIZE - 1) {
            printf("Stack is Overflow\n");
        } else {
            top = top + 1;
            stack[top] = value;
            printf("%d pushed to stack at position %d\n", value, top);
        }
    }

    return 0;
}

