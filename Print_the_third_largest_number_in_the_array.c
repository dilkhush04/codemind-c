#include<stdio.h>
int main()
{
    int i,j,n,k,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }
                j--;
                n--;
                
            }
            if(a[i]>a[j])
            {
               int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    if(n>=3)
    {
        printf("%d",a[n-3]);
    }
    else
    {
        printf("It is not possible");
    }
}