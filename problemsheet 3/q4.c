#include<stdio.h>
#define size 20
int main()
{
    int n,a[size],i,j;
    printf("enter no elements of an array=");
    scanf("%d",&n);
    if(n>size)
    {
        printf("error");
        exit(1);
    }
    else{
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    int b[size];
    for(i=0;i<n;i++)
    {
        for(j=n-1;i<n;j--)
        {
            b[j]=a[i];
        }
    }
    printf("%d",b[j]);
    }
    return 0;
}