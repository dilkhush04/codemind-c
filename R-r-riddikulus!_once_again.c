#include<stdio.h>
int main()
 {
     int i,j,k,a[100],n;
     scanf("%d  %d",&n,&k);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
      for(i=k;i<n;i++)
     {
         printf("%d ",a[i]);
     }
      for(i=0;i<k;i++)
     {
         printf("%d ",a[i]);
     }


}