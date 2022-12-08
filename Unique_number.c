#include<stdio.h>
int main()
{
    int n,a[1000],k=0,i,j;
    scanf("%d",&n);
    while(n!=0)
    {
        a[k++]=n%10;
        n/=10;
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(a[i]==a[j])
            {
                printf("Not Unique Number");
                return 0;
            }
        }
    }
    printf("Unique Number");
    return 0;
}