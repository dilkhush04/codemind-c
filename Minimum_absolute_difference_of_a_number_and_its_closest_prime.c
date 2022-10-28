#include<stdio.h> 

int main()
{
    int i,n,j,c=0,temp,p,k,a[100],x,y;
    scanf("%d",&n);
    
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
     x=n-temp;
     y=p-n;
     if(temp==n)
     {
         printf("%d",x);
     }
     else
     if(x<y)
     {
          printf("%d",x);
     }
     else
     {
          printf("%d",y);
     }
}