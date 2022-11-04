#include<stdio.h>
int main()
{
    int i,j,n,a[i],b[i],k,c=0;
    scanf("%d",&n);
    int m=n;
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
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                c++;
            }
        }
        if(c>m/2)
        {
            printf("%d",a[i]);
            break;
        }
    }
    
}