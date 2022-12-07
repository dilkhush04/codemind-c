#include<stdio.h>
int Harshed(int n)
{
    int num=0;
    while(n!=0)
    {
        num+=n%10;
        n/=10;
    }
    return num;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n%Harshed(n)==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
            
    }
    
    
    
}