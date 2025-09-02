#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, m, i, inValue;
    printf("Enter the array size : ");
    scanf("%d", &n);

    int a[n];
    int top = -1;
    int maxSize = n - 1;

    for (;;)
    {
        printf("\nEnter 1 for PUSH\nEnter 2 for POP\nEnter 3 for Display\nEnter others key for Exit\n");
        scanf("%d", &m);

        if (m == 1)
        {
            if (top == maxSize)
            {
                printf("Stack Overflow!\n");
            }
            else
            {
                printf("Enter your insert value: ");
                scanf("%d", &inValue);
                top++;
                a[top] = inValue;
                printf("Value Inserted Successfully!\n");
            }
        }
        else if (m == 2)
        {
            if (top == -1)
            {
                printf("Stack Underflow!\n");
            }
            else
            {
                printf("Value Deleted: %d\n", a[top]);
                top--;  // Just decrease top
            }
        }
        else if (m == 3)
        {
            if (top == -1)
            {
                printf("Stack is empty!\n");
            }
            else
            {
                printf("Stack values are:\n");
                for (i = 0; i <= top; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
        }
        else
        {
            exit(0);
        }
    }
    return 0;
}
