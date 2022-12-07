#include<stdio.h>
int happy(int n)
{
    int num=0;
    while(n!=0)
    {
        int rem=n%10;
        num+=rem*rem;
        n/=10;
    }
    return num;
}
int main()
{
    int n;
    scanf("%d",&n);
    n=happy(n);
    while(1>0)
    {
    if(n<10)
    {
        if(n==1 || n==7)
        {
            printf("True");
            break;
        }
        else
        {
            printf("False");
            break;
        }
    }
    else
    {
       n=happy(n); 
    }
    }
}