#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    
    int c=0;
        long rem=99;
        while(n!=0)
        {
            c++;
            rem=n%10;
            n/=10;
        }
        if(rem!=0 && c==10)
        {
            printf("Valid");
        }
        else
        {
            printf("Invalid");
        }
}