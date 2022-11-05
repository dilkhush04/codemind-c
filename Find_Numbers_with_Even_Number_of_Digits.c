#include<stdio.h>
int main()
{
    int i,j,m,T,a[100],temp,c,count=0;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<T;i++)
    {
        c=0;
        temp=a[i];
        while(temp!=0)
        {
            c++;
            temp=temp/10;
        }
        if(c%2==0)
        {
            count++;
        }
    }
    printf("%d",count);
}