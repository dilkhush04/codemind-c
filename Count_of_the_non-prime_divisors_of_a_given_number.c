#include<stdio.h>
int main()
{
    int i,j,n,flag,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(i==1)
            {c++;
            continue;}
            flag=0;
            for(j=2;j<=i/2;++j)
            {
                if(i%j==0)
                {
                    flag=1;
                }
            }
            if(flag==0)
            {
                continue;
            }
            else
            {
                c++;
            }
        }
    }
    printf("%d",c);
}