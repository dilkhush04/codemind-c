#include<stdio.h>
int add(int n)
{
    int s=0;
    while(n!=0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    n=add(n);
    while(1>0)
    {
        if(n<10)
        {
            printf("%d",n);
            break;
        }
        else
        {
            n=add(n);
        }
    }
}