#include<stdio.h> 
int main()
{
    int i,j,c=0;
    char s[100];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        c=0;
        for (j=0;s[j]!=NULL;j++)
        {
            if (s[i]==s[j] && i!=j)
            {
                c++;
                break;
            }
        }
        if (c==0)
        {
            printf("%d",i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}