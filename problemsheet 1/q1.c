#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,total;
    float per;
    printf("Ener marks for subject 1,2,3,4,5\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    total=m1+m2+m3+m4+m5;
    per=(float)total/5;
    printf("total=%d\npercentage=%f\n",total,per);
    
    if(per>=60)
    {
        printf("First Division");
    }
    else
    {
        if(per>=50)
        {
            printf("Second Class");
        }        
        else
        {
            if(per>=40)
            {
                printf("Third Class");
            }
            else
            {
                printf("Fail");        
            }
        }
    }
    return 0;
}