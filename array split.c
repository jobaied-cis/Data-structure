#include<stdio.h>
int main()
{
    int i,n ,A[n],B[n],C[n];
    printf("Enter the number of elements of Array A[]: ");
    scanf("%d",&n);

    printf("Enter the values:\n");
    for(i=0; i<n; i++)
        scanf("%d",&A[i]);

    if(n==0)
        printf("Split is not possible\n");
    else
    {
        int j=0,even=0,k=0,odd=0;
        for(i=0; i<n; i++)
        {
            if(A[i]%2==0)
            {
                B[j] = A[i];
                even++;
                j++;
            }
            else
            {
                C[k] = A[i];
                odd++;
                k++;
            }
        }

        printf("Even numbers are:\n");
        for(j=0; j<even; j++)
            printf("%d\n",B[j]);

        printf("Odd numbers are:\n");
        for(k=0; k<odd; k++)
            printf("%d\n",C[k]);
    }

    return 0;
}

