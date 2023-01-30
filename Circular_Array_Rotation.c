#include<stdio.h>
int main()
{
    int n,r,quary,index;
    scanf("%d %d %d",&n,&r,&quary);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int k=0;k<r;k++)
    {
        int last=a[n-1];
        for(int i=n-1;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=last;
        
    }
    for(int i=0;i<quary;i++)
    {
        scanf("%d",&index);
        printf("%d
",a[index]);
    }
}