#include<stdio.h>
int main()
{
    int i,j,k,a[100],N,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        int lst=5;
        lst=a[n-1];
        for(j=n-1;j>0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=lst;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}