#include<stdio.h>
bool Array(int arr[] ,int n)
{
    int L_sum=0,R_sum=0;
    for(int i=0;i<n;i++)
    {
        L_sum=0;
        R_sum=0;
        for(int j=0;j<i;j++)
        {
            L_sum+=arr[j];
        }
        for(int j=i+1;j<n;j++)
        {
            R_sum+=arr[j];
        }
        if(L_sum==R_sum)
        return true;
    }
    return false; 
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t-->0)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        if(Array(arr,n))
        printf("YES
");
        else
        printf("NO
");
        
    }
}