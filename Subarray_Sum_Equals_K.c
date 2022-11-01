#include<stdio.h>
int main()
{
    int n,i,j,a[100],sum=0,k,c=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum=sum+a[j];
            if(sum==k)
            {
                c++;
            }
        }
    }
    printf("%d",c);
    return 0;
}