#include<stdio.h>
int main()
{
    int m,hr,m1;
    scanf("%d",&m);
    if(m>60)
    {
        hr=m/60;
        m=m%60;
        printf("%d %d",hr,m);
        
    }
    else
    {
        //printf("0");
    
    printf("%d %d",0,m);
    }
    
    
    return 0;
    
    
}
