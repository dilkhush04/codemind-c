#include<stdio.h>
int main()
{
    int i,j,n,even=0,odd=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d",even,odd);
}