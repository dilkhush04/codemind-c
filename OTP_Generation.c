#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {
        int num=(int)(s[i]-'0');
        if(num%2!=0){
            printf("%d",num*num);
        }
    }
    
}