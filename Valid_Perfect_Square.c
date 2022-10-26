#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],temp,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=a[i];
       int sq=pow(temp,0.5);
     int  num=pow(sq,2);
       if(num==temp)
       {
           printf("True");
           printf("
");
       }
       else
       {
           printf("False");
           printf("
");
       }
    }
}