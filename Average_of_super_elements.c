#include<stdio.h>
int main()
{
    int n,i,j,a[100],b[100],c=0,d=0,sum=0,m,k;
    scanf("%d",&n);
    m=n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }
                j--;
                n--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                c++;
            }
        }
        if(c==a[i])
        {
            sum=sum+a[i];
            d++;
        }
    }
    if(d==0)
    {
        printf("-1");
    }
    else
    {
        double avg=(float)sum/d;
    printf("%.2f",avg);
    }
}