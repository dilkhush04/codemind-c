#include<stdio.h>
int main()
{
    int n, a[100],extra,temp=-999,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(temp<a[i])
        {
            temp=a[i];
        }
    }
    scanf("%d",&extra);
    for(i=0;i<n;i++)
    {
        if((a[i]+extra)>=temp)
        {
            printf("True ");
        }
        else
        {
             printf("False ");
        }
    }
}