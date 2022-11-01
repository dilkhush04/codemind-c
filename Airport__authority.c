#include<stdio.h>
int main()
{
    int n,th,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&th);
    for(i=0;i<n;i++)
    {
        if(a[i]<=th)
        {
            c++;
        }
        else
        {
            c=c+2;
        }
    }
    printf("%d",c);
}