#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t-->0){
        int n,m;
        scanf("%d %d",&m,&n);
        int a[m+n];
        for(int i=0;i<n+m;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n+m;i++)
        {
            for(int j=i+1;j<m+n;j++)
            {
                if(a[i]>a[j])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(int i=0;i<n+m;i++)
        {
            if(i!=m+n-1)
            {
                printf("%d ",a[i]);
            }
            else
            {
                printf("%d",a[i]);
            }
        }
        printf("
");
        
        
    }
}