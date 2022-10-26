#include<stdio.h>
int main()
{
    int n,k,temp,rem,sum=0;
    scanf("%d",&n);
    temp=n;
    while(k=1)
    {
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    if(sum<10)
    {
        printf("%d",sum);
        break;
    }
    else
    {
    temp=sum;
    sum=0;
    }
    }
}