#include<stdio.h>
int Neon(int n)
{
    int m=n*n,sum=0;
    while(m!=0)
    {
        sum+=m%10;
        m/=10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n==Neon(n))
    printf("Neon Number");
    else
    printf("Not Neon Number");
}