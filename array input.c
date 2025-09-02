#include<stdio.h>
int main()
{
    int a[100],i,n,value,pos;
    prinft("enter array size\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    prinft("enter insert position\n");
    scanf("%d",&pos);
    prinft("enter array insert value\n");
    scanf("%d",&value);
    for(i=n;i>=pos;i--)
    {
        printf("%d",a[i]);
        a[i]=a[i-1];
    }
    a[pos-1]=value;
    n++;
     printf("final elements\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
