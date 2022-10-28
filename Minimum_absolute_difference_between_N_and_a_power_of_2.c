#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,j,max,min,temp,x,y;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        temp=pow(2,i);
        if(temp<=n)
        {
            min=temp;
        }
        if(temp>=n)
        {
            max=temp;
            break;
        }
    
    }
    x=n-min;
    y=max-n;
    if(min==n)
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