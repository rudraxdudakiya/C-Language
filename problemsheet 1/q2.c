#include<stdio.h>
int main()
{
    int cy,jy,exp;
    printf("enter current year & joining year=");
    scanf("%d%d",&cy,&jy);

    exp = cy-jy;
    printf("experience=%d\n",exp);

    if(exp>=7)
    {
        printf("bonus rs.5000");
    }
    else
    {
        if(exp>=4)
        {
            printf("bonus rs.3000");
        }
        else
        {
            if(exp>=3)
            {
                printf("bonus rs.1000");
            }
            else
            {
                printf("not eligible for bonus");
            }    
        }
    }

    return 0;
}