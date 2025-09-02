#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,m,n,invalue;
    printf("enter array size:");
    scanf("%d",&n);
    int a[n];
    int top=-1;
    int maxsize=n-1;
    for(;;)
    {
        printf("enter 1 for push\nenter 2 for pop\nenter 3 for display \n enter others pf exit\n ");
        scanf("%d",&n);
        if(m==1){
            if(top==maxsize)
            {
                printf("stack is overflow\n");
            }
            else {
                printf("enter value\n");
                scanf("%d",&invalue);
                top++;
                a[top]=invalue;
                printf("stack is insert \n");
            }
        }
         else if(m==2){
            if(top==-1)
            {
                printf("stack is underflow\n");
            }
            else {
                a[top]=NULL;
                top--;
                printf("stack is delete \n");
            }
        }
        else if(m==3)
        {
            printf("finAL STACK IS :");
            for(i=0;i<=top;i++){
                printf("%d",a[i]);
            }
        }
        else
        {
            exit(0);
        }
    }
    return 0;
}
