#include<stdio.h>
int happy( int n)
{
   int rev=0;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}
int main()
{
    int n;
    scanf("%d",&n);
   printf("%d",happy(n));
}