#include<stdio.h>
int main()
{
    int p_2013, p_2014, p_2015, p_2016, p_2017, p_2018, p_2019;
    printf("enter p_2013=");
    scanf("%d",&p_2013);
    
     p_2014=p_2013+(p_2013*0.1);
     p_2015=p_2014-(p_2014*0.1);
     p_2016=p_2015+(p_2015*0.1123);
     p_2017=p_2016;
     p_2018=p_2017-(p_2017*0.042);
     p_2019=p_2018+(p_2018*0.023);
            
    printf("\np_2014=%d\np_2015=%d\np_2016=%d\np_2017=%d\np_2018=%d\np_2019=%d" ,p_2014,p_2015,p_2016,p_2017,p_2018,p_2019);      
    return 0;
}

