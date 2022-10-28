#include<stdio.h>
int main()
{
    int n, a,b,c,num,i,min,max,p,arr[10000];
    scanf("%d",&n);
    num=n*n;
    c=0;
    a=1;
    b=0;
    for(i=0;i<num;i++)
    {
        
        arr[i]=c;
        c=a+b;
        a=b;
        b=c;
     
    }
   
   for(i=0;i<num;i++)
    {
        if(arr[i]<=n)
        {
            min=arr[i];
        }
        if(arr[i]>=n)
        {
            max=arr[i];
            break;
        }
    }
   
    if((n-min)<(max-n))
    {
         printf("%d",min);
    }
    
    else
    if((n-min)==(max-n))
    {
         printf("%d %d",min,max);
    }
    else
    printf("%d",max);
}