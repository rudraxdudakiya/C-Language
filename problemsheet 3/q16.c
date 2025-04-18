#include<stdio.h>
#define row 3
#define col 3
int main()
{
    int i,j,a[row][col],max;

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

    printf("\nrow\n");
    for(i=0;i<row;i++)
    {
        max=a[i][0];
        for(j=0;j<col;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
            }
        }
        printf("smalest in row %d=%d\n",i+1,max);
    }
    
    printf("\ncol:\n");
    for(i=0;i<col;i++)
    {
        max=a[0][i];
        for(j=0;j<row;j++)
        {
            if(max<a[j][i])
            {
                max=a[j][i];
            }
        }
        printf("smalest in col %d=%d\n",i+1,max);
    }
    return 0;
}