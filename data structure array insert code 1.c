#include<stdio.h>
int main()
{
    int n,i,j,v,pos,invalue;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int A[n+1];
    printf("enter the element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("enter the insert position:");
    scanf("%d",&pos);
    printf("enter the insert value:");
    scanf("%d",&v);
    if(pos>=n)
    A[n]=v;
    else
    {
        for(j=n;j>pos;j--)
        {
            A[j]=A[j-i];
        }
        A[pos]=v;
    }
     printf("final value are\n:");
    for(i=0;i<=n+1;i++)
    {
        printf("%d\n",&A[i]);
    }
}
