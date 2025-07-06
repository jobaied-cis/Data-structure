#include <stdio.h>

int main()
{
    int stack[5];        // Stack array of size 5
    int top = -1;        // Stack is initially empty
    int MAXSIZE = 5;     // Maximum stack size
    int choice, value;

    while (1)
    {
        // Menu options
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // PUSH
        if (choice == 1)
        {
            if (top == MAXSIZE - 1)
            {
                printf("Stack is Overflow\n");
            }
            else
            {
                printf("Enter value to push: ");
                scanf("%d", &value);
                top = top + 1;
                stack[top] = value;
                printf("%d pushed to stack at position %d\n", value, top);
            }
        }

        // POP
        else if (choice == 2)
        {
            if (top == -1)
            {
                printf("Stack is Underflow\n");
            }
            else
            {
                printf("%d popped from position %d\n", stack[top], top);
                stack[top] = 0;   // Optional: clear value
                top = top - 1;
            }
        }

        // DISPLAY
        else if (choice == 3)
        {
            if (top == -1)
            {
                printf("Stack is Empty\n");
            }
            else
            {
                printf("Stack elements:\n");
                for (int i = top; i >= 0; i--)
                {
                    printf("stack[%d] = %d\n", i, stack[i]);
                }
            }
        }

        // EXIT
        else if (choice == 4)
        {
            printf("Exiting program. Goodbye!\n");
            break;
        }

        // Invalid Choice
        else
        {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

