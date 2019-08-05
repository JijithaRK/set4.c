#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    if(a>=c&&b>=d)
    printf("%d %d",a-c,b-d);
    else if(c>=a&&d>=b)
    printf("%d %d",c-a,d-b);
    else if(a>=c&&d>=b)
    printf("%d %d",a-c,d-b);
    else
    printf("%d %d",c-a,b-d);
    
    return 0;
    
    
}
