#include<stdio.h>
int Spy(int n)
{
    int sum=0,p=1;
    while(n!=0)
    {
        int rem=n%10;
        sum+=rem;
        p=p*rem;
        n/=10;
    }
    if(sum==p)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(Spy(n)==1)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}