#include<stdio.h>
int main()
{
    int i,j,k,n=5;
    for(i=n;i>0;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf(" %d ",j);
        }
     
    for(k=0;k<i-1;k++)
    {
        printf(" %d ",n);
    }
       printf("\n");
    }
    return 0;
}