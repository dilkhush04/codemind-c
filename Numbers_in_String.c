#include<stdio.h>
int main()
{
    char s[1000],sum=0;
    scanf("%[^
]s",s);
    for (int i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            sum+=s[i]-'0';
        }
    }
    printf("%d",sum);
}