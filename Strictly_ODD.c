#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
        {
            if(i%2!=0)
            {
                continue;
            }
             else
           {
                printf("False");
                return 0;
           }
        }
        
        
    }
    printf("True");
    return 0;
}