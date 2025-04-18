#include<stdio.h>
#define asize 5
#define bsize 5
int main()
{
    int a[asize],b[asize];
    int csize=asize+bsize;
    int i,j=0;
    int c[csize];

    printf("\nenter array A %d elements\n",asize);
    for(i=0;i<asize;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array A\n");
    for(i=0;i<asize;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\nenter array B %d elements\n",bsize);
    for(i=0;i<bsize;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Array B\n");
    for(i=0;i<bsize;i++)
    {
        printf("%d\t",b[i]);
    }
    
    for(i=0;i<csize;i++)
    {
        if(i<asize)
        {
            c[i]=a[i];
        }
        else
        {
            c[i]=b[j];
            j++;
        }
    }
    printf("\nArray C\n");
    for(i=0;i<csize;i++)
    {
        printf("%d\t",c[i]);
    }
    int temp;
    for(i=0;i<csize;i++)
    {
        for(j=i+1;j<csize;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    printf("sorted array C\n");
    for(i=0;i<csize;i++)
    {
        printf("%d\t",c[i]);
    }
    return 0;
}