#include<stdio.h>
int pro(int n)
{
    if(n==1)
    return 0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return n;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(pro(i)*pro(j)==n)
            {
                printf("%d %d",i,j);
                return 0;
            }
        }
    }
    printf("-1");
    return 0;
}