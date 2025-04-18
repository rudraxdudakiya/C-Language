#include<stdio.h>
int main()
{
    int cy,jy,exp;
    printf("enter joining year=");
    scanf("%d",&jy);
    
    printf("enter current year=");
    scanf("%d",&cy);
    
    exp=cy-jy;
    printf("experiance=%d\n",exp);

    if(exp>3)
    
        printf("Bonus of Rs.5000/-");
    else
        printf("An employee is not eligible for the bonus");
    return 0;
}