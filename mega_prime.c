#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i;
    if (n==1)
    return 0;
    for (i=2;i<=ceil(sqrt(n));i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(prime(n)==1)
    {
        while(n)
        {
            if(prime(n%10)!=1)
            {
                printf("Not Mega Prime");
                return 0;
            }
            n/=10;
        }
        printf("Mega Prime");
    }
    else
    printf("Not Mega Prime");
}