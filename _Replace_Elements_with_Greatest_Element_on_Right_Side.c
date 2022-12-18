#include<stdio.h>
void replace(int arr[], int n)
{
    int max = arr[n-1];
    arr[n-1] = -1;
    for(int i=n-2;i>=0;i--)
       {
        int temp = arr[i];
        arr[i]=max;
        if(max< temp)
        {
            max=temp;
        }
     }
     for(int i=0;i<n;i++)
     {
         printf("%d ",arr[i]);
     }
  
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    replace(arr,n);
}