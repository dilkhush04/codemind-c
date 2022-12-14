#include<stdio.h>
void swap(int arr[] , int a, int b)
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
void method(int arr[], int n)
{
    for(int i=0;i<n-1;i+=2)
    {
        swap(arr, i, i+1);
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
    int arr[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
              int  temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    method(arr,n);
}