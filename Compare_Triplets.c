#include<stdio.h>
int main()
{
    int a[100],b[100],i,j,ap=0,bp=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            ap++;
        }
        else
        if(a[i]==b[i])
        {
            continue;
        }
        else
        {
            bp++;
        }
    }
    printf("%d %d",ap,bp);
}