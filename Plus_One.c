#include<stdio.h>
int main()
{
    int n,j,i,a[100],num=0,rem,num1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        num=num*10+a[i];
    }
    int c=0;
    num1=num+1;
    while(num1!=0)
    {
        rem=num1%10;
        a[c]=rem;
        c++;
        num1=num1/10;
    }
    for(i=c-1;i>=0;i--)
   {
       printf("%d ",a[i]);
}
    
}