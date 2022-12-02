#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
  int   x=n<m?n:m;
    while(1>0)
    {
        if(x>0)
        {
        if(n%x==0 && m%x==0)
        {
            printf("%d",x);
            break;
        }
        x--;
        }
    }
}