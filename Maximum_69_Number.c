#include<stdio.h>
int number(int n)
{
    int num=0;
    while(n!=0)
    {
        num=num*10+n%10;
        n=n/10;
    }
    return num;
}
int main()
{
    int n,i,j=0,c=0;
    scanf("%d",&n);
    n=number(n);
    while(n!=0)
    {
        i=n%10;
        if(c==0)
        {    if(i==6)
            {
                i=9;
                c=1;
            }
        }
        j=j*10+i;
        n=n/10;
    }   
    printf("%d",j);
    return 0;
}