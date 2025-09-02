#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, m, i, j, inValue;
    printf("Enter the array size : ");
    scanf("%d", &n);
    int a[n];
    int top = -1;
    int maxSize = n - 1;
    for (;;)
    {
        printf("Enter 1 for PUSH\nEnter 2 for POP\nEnter 3 for display\nEnter
               others key for Exit\n");
               scanf("%d", &m);
               if (m == 1)
        {
            if (top == maxSize)
                {
                    printf("Overflow\n");
                }
                else
                {
                    printf("Enter your insert value\n");
                    scanf("%d", &inValue);
                    top++;
                    a[top] = inValue;
                    printf("Value is successfully Inserted\n\n");
                }
            }
            else if (m == 2)
        {
            if (top == -1)
                {
                    printf("Underflow\n");
                }
                else
                {
                    a[top] = NULL;
                    top--;
                    printf("Value is successfully Deleted\n\n");
                }
            }
            else if (m == 3)
        {
            printf("stack values are\n");
                for (i = 0; i <= top; i++)
                {
                    printf("%d\n", a[i]);
                }
            }
            else
            {
                exit(0);
            }
    }
    return 0;
}

