#include<stdio.h>
int main()
{
    int a[20],i,pos,val,n;
    printf("Enter array size: ");
    scanf("%d",&n); //5
    printf("Enter these values: ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position where you want to delete: ");
    scanf("%d",&pos);//3

    for(i=pos;i<n;i++)
    {
        a[i] = a[i+1]; //a[3]=19; a[4]=25
    }

    printf("After deleting\n=================\n");
    for(i=1;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}



