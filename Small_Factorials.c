#include <stdio.h>
int main() {
    int n, i,a[100],j,num;
    unsigned long long fact = 1;
    //printf("Enter an integer: ");
    scanf("%d", &num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<num;j++)
    {
        
    n=a[j];
    

    
    if (n < 0)
    int k=1;
       
    else
    {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
    }
        printf("%llu",fact);
        printf("
");
        fact=1;
    }
    
   
}