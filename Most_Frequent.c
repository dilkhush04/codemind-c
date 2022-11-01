#include<stdio.h>
int main()
{
    int n,a[100],i,j,temp=-9999,b[100],k,c,samp,p=0,d[100],temp1=9999;
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
    	
        c=0;
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                c++;
            }
        }
        if(temp<c)
        {
            temp=c;
            samp=a[i];
        }
        if(temp==c)
        {
            if(samp>a[i])
            {
                samp=a[i];
            }
        }
    }
    printf("%d",samp);
    
    
}