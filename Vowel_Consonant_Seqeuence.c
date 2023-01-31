#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int k=0;
    char cons[100];
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='a' || str[i]=='e' ||str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            cons[k++]='V';
        }
        else
        {
            cons[k++]='C';
        }
    }
    char ch=cons[0];
    printf("%c",ch);
    for(int i=1;i<k;i++)
    {
        if(cons[i]!=ch)
        {
            printf("%c",cons[i]);
        }
        ch=cons[i];
    }
}