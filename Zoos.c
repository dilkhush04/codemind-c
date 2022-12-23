#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int z=0,o=0;
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='z')
        {
            z++;
        }
        else
        {
            o++;
        }
    }
    if(z*2==o)
    {
        printf("Yes");
    }
    else
    printf("No");
}