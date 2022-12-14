#include<stdio.h>
#include<string.h>
int value(char c)
{
    if(c=='I')
    return 1;
    if(c=='V')
    return 5;
    if(c=='X')
    return 10;
    if(c=='L')
    return 50;
    if(c=='C')
    return 100;
    if(c=='D')
    return 500;
    if(c=='M')
    return 1000;
    
}
int roman(char str[])
{
    int res=0;
    for(int i=0;i<strlen(str);i++)
    {
        int s1=value(str[i]);
        if(i+1<strlen(str))
        {
            int s2=value(str[i+1]);
            if(s1>=s2)
            {
                res=res+s1;
            }
            else
            {
                res=res+s2-s1;
                i++;
            }
            
        }
        else
        {
            res=res+s1;
        }
    }
    return res;
}
int main()
{
    char s[100];
    scanf("%s",s);
    printf("%d",roman(s));
}