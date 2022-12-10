#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],ch;
    int c=0,temp=-999;
    scanf("%[^
]s",s);
    for(int i=0;i<strlen(s);i++)
    {
        if(temp<int(s[i]))
        {
            temp=int(s[i]);
            ch=s[i];
        }
    }
    printf("%c",ch);
    
    
}