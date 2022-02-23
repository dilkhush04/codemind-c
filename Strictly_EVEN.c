#include<stdio.h>
   int main()
{
    int n,c=0,i;
    scanf("%d",&n);
    int a[n],t[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            c++;
            a[i]=0;
        }
    }
    int k;
    for(i=0,k=0;i<n,k<c;i+=2,k++)
    {
        if(a[i+1]==0)
        {
            printf("False");
            return 0;
        }
    }
    printf("True");
    return 0;
}