#include<stdio.h>
int main()
{
    int i,j,k,n=5;
    for(i=n;i>0;i--)
    {
        for(k=0;k<n-i;k++)
        {
            printf("   ");
        }
        for(j=i;j>0;j--)
        {
            printf(" %d ",j);
        }
        for(j=2;j<=i;j++)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
    return 0;
}