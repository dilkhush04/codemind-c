#include<stdio.h>
int palidrome(int n)
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
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n;
        scanf("%d",&n);
        if(n==palidrome(n))
        {
            printf("True
");
        }
        else
        printf("False
");
        t--;
    }
}