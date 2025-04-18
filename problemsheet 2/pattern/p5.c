#include<stdio.h>
int main()
{
    int i,j,k,n=5;
    for(i=n;i>0;i--)
    {
        for(j=1;j<=(2*i)-1;j++)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
    return 0;
}