#include<stdio.h>
int main()
{
    int n,i,j,rem,p=1,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        for(i=1;i<=rem;i++)
        {
            p=p*i;
        }
        sum=sum+p;
        n=n/10;
        p=1;
    }
    if(temp==sum)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
         printf("The number %d is not a strong number",temp);
    }
}