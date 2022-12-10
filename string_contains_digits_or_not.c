#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T>0)
    {
    char s[1000];
    int c=0;
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]<='9' && s[i]>='0')
        {
            c++;
        }
    }
    if(c==0)
    printf("No
");
    else
    printf("Yes
");
    T--;
    }
}