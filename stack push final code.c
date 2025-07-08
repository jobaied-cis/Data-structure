//push
#include <stdio.h>

int main()
{
    int n,i,j,m,InValue;
    printf("Enter the number of element of stack\n");
    scanf("%d",&n);
    int Stack[n];
    int Top=-1, Maxsize = n-1;

    for(;;)
    {
        printf("Enter 1 for Push\nEnter 2 for Display\nEnter others key for Exit\n");
        scanf("%d",&m);

        if(m==1)
        {
            if(Top==Maxsize)
                printf("Overflow\n");
            else
            {
                printf("Enter your Insert Value\n");
                scanf("%d",&InValue);
                Top = Top + 1;
                Stack[Top] = InValue;
                printf("Value is successfully Inserted\n");
            }
        }
        else if(m==2)
        {
            printf("Stack values are\n");
            for(i=0; i<=Top ; i++)
                printf("%d\n",Stack[i]);
        }
        else
            exit(0);
    }
}
