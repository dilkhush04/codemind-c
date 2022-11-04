#include<stdio.h>
int main()
{
    int i,j=0,n,a[100],b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]!=0)
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(i<j)
        printf("%d ",b[i]);
        else
        printf("0 ");
    }
}