#include<stdio.h>
int main()
{
    int a[10]={0};
    int i,n,j,count=0,flag=0;

    printf("enter elements of array:");
    for(i=0;i<10;i++)
    {
        printf("a[%d]=" ,i);
        scanf("%d" ,&a[i]);
    }

    printf("prime mumbers in the array are as follows:\n");
    for(i=0;i<10;i++)
    {
        for(j=2;j<n;j++)
        {
            if(a[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            count++;
            printf("%d ",a[i]);
        }
        else
        continue;
    } 
    printf("\ncount of all prime numers in array=%d" ,count);

    return 0;
}