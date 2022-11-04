#include<stdio.h>
int main()
{
    int i,j,num,n,a[100],b[100],sum,miss,add;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        sum=0;
        
        scanf("%d",&n);
        add=n*(n+1)/2;
        for(j=0;j<n-1;j++)
        {
            scanf("%d",&a[j]);
            sum=sum+a[j];
        }
       //iss=add-sum;
        b[i]=add-sum;
    }
    for(i=0;i<num;i++)
    printf("%d
",b[i]);
    
}