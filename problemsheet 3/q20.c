#include<stdio.h>
#define row 3
#define col 3
int main()
{
    int a[row][col],i,j,sum=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("sum=%d",sum);
    return 0;
}