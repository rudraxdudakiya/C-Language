#include<stdio.h>
#define row 4
#define col 3

int main()
{
    int a[row][col], b[row][col], c[row][col], i, j;

printf("enter 4X3 ordered matrix for addition and subtraction\n");
//taking input of matrix A
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
printf("\n");

//taking input of matrix B
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
printf("\n");

//printing matrix A  
printf("matrix A\n");  
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
//printing matrix B
printf("matrix B\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

//matrix addition
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }   
    }    

    printf("\n addition \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }   
    
//matrix subtraction
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }

    printf("\n subtraction \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

printf("\nenter 3x4 matrix\n");
int m[col][row];
//matrix multiplication
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("m[%d][%d]=",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    printf("matrix M\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

    int p[row][row], t[col][row] ,k;

    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            int sum=0;
            for(k=0;k<col;k++)
            {
                sum=sum+a[i][k]*m[k][j];
                p[i][j]=sum;
            }
        }
    }
    printf("\n maltiplication of matrix A(4x3) and M(3x4)\n");
    printf("\n matrix P 4x4\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\t",p[i][j]);
        }
        printf("\n");
    }

//transpose    
    printf("transpose of matrix P\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\t",p[j][i]);
        }
        printf("\n");
    }
    return 0;
}