#include<stdio.h>
#define row 3
#define col 3
int main()
{
    int a[row][col],i,j,k,temp;
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

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            for(k=j+1;k<col;k++)
            {
                if(a[i][j]>a[i][k])
                {
                    temp=a[i][k];
                    a[i][k]=a[i][j];
                    a[i][j]=temp;
                }
            }
        }
    }
    printf("\nrow wise sorting\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
    printf("\n");
    }

    printf("\ncolumn wise sorting\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            for(k=0;k<row;k++)
            {
                if(a[j][i]<a[k][j])
                {
                    temp=a[j][i];
                    a[j][i]=a[k][j];
                    a[k][j]=temp;
                }
            }
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

    return 0;
}