#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int k=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='(')
        {
            k++;
        }
        if(s[i]==')')
        {
            k--;
        }
        if(k<0)
        break;
    }
    if(k==0)
    printf("True");
    else
    printf("False");
}