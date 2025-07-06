#include <stdio.h>
#define MAX 5

int main() {
    int stack[MAX] = {10, 20, 30};  // Example stack with 3 values
    int top = 2;  // Top is at index 2 (value = 30)

    if (top == -1) {
        printf("Stack is empty, nothing to peek\n");
    } else {
        printf("Top element is: %d\n", stack[top]);
    }

    return 0;
}

