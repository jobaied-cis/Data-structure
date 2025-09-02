#include <stdio.h>
int main()
{
    int m,n,i,j,p;
    printf("Enter the array size of b : ");
    scanf("%d",&m);
    int b[m];
    printf("Enter the array value : ");
    for(i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Enter the array size of c : ");
    scanf("%d",&p);
    int c[p];
    printf("Enter the array value : ");
    for(j=0; j<p; j++)
    {
        scanf("%d",&c[j]);
    }
    n = m+p;
    int a[n];
    for(i=0; i<m; i++)
    {
        a[i] = b[i];
    }
    for(j=0; j<p; j++)
    {
        a[i] = c[j];
        i++;
    }
    printf("a is : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

