#include<stdio.h>
int main()
{
    int n,a,b,c,i,arr[100];
    scanf("%d",&n);
    // arr[0]=0;
      a=1;
       b=0;
       c=0;
    for(i=0;i<n;i++){
    
      
      
       arr[i]=c;
       c=a+b;
       a=b;
       b=c;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
        //printf("
");
    }
}