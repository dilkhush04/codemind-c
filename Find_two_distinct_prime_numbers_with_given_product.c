#include<stdio.h>
int main()
{
    int i,j,n,k=0,a[100],d=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
       int flag=0;
       for(j=2;j<=i/2;j++)
       {
           if(i%j==0)
           {
               flag=1;
           }
       }
       if(flag==0)
       {
           
           a[k]=i;
           k++;
           
       }
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(a[i]*a[j]==n)
            {
                printf("%d %d",a[i],a[j]);
                d++;
                break;
            }
        }
    }
    if(d==0)
    {
        printf("-1");
    }
}