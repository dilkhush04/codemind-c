#include<stdio.h>
#include<string.h>
#include<math.h>
int checkparenthesis(char s[])
{
    int star=0;
    int leftparen=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='*')
        {
            star+=1;
        }
        else
        if(s[i]=='(')
        {
             leftparen+=1;   
        }
        else
        if(s[i]==')')
        {
            leftparen-=1;
        }
        if(-leftparen>star)
        {
            return 0;
        }
    }
        star=0;
        int rightparen=0;
        for(int i=strlen(s)-1;i>=0;i--)
        {
            if(s[i]=='*')
            {
                star+=1;
            }
            else
            if(s[i]==')')
            {
                rightparen+=1;
            }
            else
            if(s[i]=='(')
            {
                rightparen-=1;
            }
            if(-rightparen>star)
            {
                return 0;
            }
        }
        return 1;
        
    
}
int main()
{
    char s[100];
    scanf("%s",s);
    if(checkparenthesis(s)==1)
    printf("True");
    else
    printf("False");
}