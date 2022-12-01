#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char s[100];
    scanf("%[^
]s",s);
    int n=strlen(s);
    for(i=n-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
    
}