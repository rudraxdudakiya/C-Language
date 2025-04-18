#include<stdio.h>
#define row 3
#define col 3
int main()
{
    int i,j,a[row][col];
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
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nrow:\n");
    for(i=0;i<row;i++)
    {
        int sum=0;
        for(j=0;j<col;j++)
        {
            sum=sum+a[i][j];
        }
        printf("sum of %d row=%d\n",i+1,sum);
    }
    
    printf("\ncol:\n");
    for(i=0;i<col;i++)
    {
        int sum=0;
        for(j=0;j<row;j++)
        {
            sum=sum+a[j][i];
        }
        printf("sum of %d col=%d\n",i+1,sum);
    }
    return 0;
}