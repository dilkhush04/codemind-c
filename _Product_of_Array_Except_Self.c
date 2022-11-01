#include<stdio.h>
int main()
{
    int i,j,a[100],n,product=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        product=1;
        for(j=0;j<n;j++)
        {
            if(j==i)
            continue;
            product=product*a[j];
        }
        printf("%d ",product);
    }
}