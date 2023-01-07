#include<stdio.h>
#include<string.h>
void Columnsheet(int n)
{
    char str[100];
    int i=0;
    while(n>0)
    {
        int rem= n%26;
         
         if(rem==0)
         {
             str[i++]='Z';
             n=(n/26)-1;
             
         }
         else
         {
             str[i++]=(rem-1)+'A';
             n=n/26;
         }
    }
    for(int i=strlen(str)-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}
int main()
{
   int n;
   scanf("%d",&n);
   Columnsheet(n);
    return 0;
}