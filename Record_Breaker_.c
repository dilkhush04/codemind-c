#include<stdio.h>
int Record(int a[], int n)
{
    int ans=0;
    int max=-1;
    if(n==1)
    {
       return 1;
    }
    else{
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            if(a[i]>a[i+1])
            {
                ans++;
            }
        }
    }
    if(a[n-1]>max)
    {
        ans++;
    }
    }
    return ans;
}
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        printf("Case #%d: %d
",i+1,Record(a,n));
    }
}