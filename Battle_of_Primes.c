#include<stdio.h>
int prime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b,n,k=99;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=1;i<k;i++)
    {
        if(prime(a+b+i))
        {
            printf("%d",i);
            break;
        }
    }
}