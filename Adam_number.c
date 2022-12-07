#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sq=n*n;
    int rev=0,rev1=0;
    while(n!=0)
    {
       
        rev=rev*10+n%10;
        n/=10;
    }
    int sq1=rev*rev;
    while(sq1!=0)
    {
        rev1=rev1*10+sq1%10;
        sq1/=10;
    }
    if(sq==rev1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
         
}