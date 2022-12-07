#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,m,sum=0;
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        c++;
        n/=10;
    }
    n=m;
    while(n!=0)
    {
        sum+=pow(n%10,c--);
        n/=10;
    }
    if(sum==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}