#include<stdio.h>
int main()
{
    int i,j=0,n,a[100],bigsum=-9999,sum=0;
    scanf("%d",&n);
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
            {
                if(bigsum<sum)
                {
                    bigsum=sum;
                }
            }
        }
    }
    printf("%d",bigsum);
}