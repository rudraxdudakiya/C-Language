#include<stdio.h>
int main()
{
    int i,j,k,n=5;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("   ");
        }
        for(k=1;k<=n-i;k++)
        {
            printf(" %d ",k);
        }
        for(k=k-2;k>0;k--)
        {
            printf(" %d ",k);
        }
        printf("\n");
    }
    return 0;
}