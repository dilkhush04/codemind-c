#include<stdio.h>
int main()
{
    int i,n,j,c=0,temp,p,k,a[100],s=0,b[100],num,max;
    scanf("%d",&num);
    for(k=0;k<num;k++)
    {
        scanf("%d",&a[k]);
    }
    for(k=0;k<num;k++)
    {
        n=a[k];
    
    for(i=0;i<(n*n);i++)
    {
        if(i<=1)
        continue;
        for(j=2;j<=i/2;++j)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            if(i<=n)
            {
                temp=i;
            }
            if(i>=n)
            {
                p=i;
                break;
            }
            
        }
        c=0;
        
    }
    if(temp-n==0)
    {
         max=n;
    }
    else
    if((n-temp)<(p-n))
    {
        max=temp;
    }

    else
    if((n-temp)==(p-n))
    {
         max=temp;
    }
    else
    {
         max=p;
    }
    b[s]=max;
    s++;
}
for(i=0;i<s;i++)
{
    printf("%d
",b[i]);
}
     
}