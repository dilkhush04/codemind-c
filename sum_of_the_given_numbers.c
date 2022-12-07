#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        printf("%d
",m+n);
        t--;
    }
}