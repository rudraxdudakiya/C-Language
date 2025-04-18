#include<stdio.h>
int main()
{
    int i,j,k,n=5;
    for(i=n;i>0;i--)
    {
        for(j=0;j<n-i;j++)
        {
            printf("   ");
        }
        for(k=i;k>0;k--)
        {
            printf(" %d ",k);
        }
        printf("\n");
    }

    return 0;
}