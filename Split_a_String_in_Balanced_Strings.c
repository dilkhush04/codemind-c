#include<stdio.h>
#include<string.h>
int string(char s[])
{
    int c=0;
    int result=0;
    
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='L')
        c++;
        if(s[i]=='R')
        c--;
        if(c==0)
        result++;
    }
    return result;
}
int main()
{
    char s[100];
    scanf("%s",s);
    printf("%d",string(s));
}