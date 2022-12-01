#include<stdio.h>
#include<string.h>
int main()
{
    char a[200];
    scanf("%[^
]s",a);
    int s=strlen(a),i;
    for(i=0;i<s;i++)
    {
        if(a[i]=='.')
        {
          printf("[.]");
        }
        else
        {
            printf("%c",a[i]);
        }
    }
    
    return 0;
}