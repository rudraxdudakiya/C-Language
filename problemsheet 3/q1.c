#include<stdio.h>
#define size 20
int main()
{
    int a[size]={0};
    int n,i,j;
    printf("enter number of element in  array=");
    scanf("%d",&n);
    printf("enter the elements of array a:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=" ,i);
        scanf("%d" ,&a[i]);
    }
    int temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("array after sorting in ascending order:");
    for(i=0;i<n;i++)
    {
        printf("%d " ,a[i]);
    }
    
    /*
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf(\n"array after sorting in dicsending order:");
    for(i=0;i<n;i++)
    {
        printf("%d " ,a[i]);
    }
    */
    return 0;
}