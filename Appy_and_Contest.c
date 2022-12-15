#include<stdio.h>
int gcd(int a,int b)
{
    if(a==0)
    return b;
    return gcd(b%a,a);
}
int lcm(int a,int b)
{
    return a*b/gcd(a,b);
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T-->0)
    {
        int n,a,b,k,result;
        scanf("%d%d%d%d",&n,&a,&b,&k);
        result=n/a+n/b+(2*(n/lcm(a,b)));
        if(result>=k)
        printf("Win
");
        else
        printf("Lose
");
        
    }
}