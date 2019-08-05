#include<stdio.h>
int main()
{
    int n,b[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d %d",b[i],i);
        printf("\n");
    }
    return 0;
}
