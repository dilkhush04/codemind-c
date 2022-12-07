#include<stdio.h>
#include<string.h>
int main ()
{
    char str[50000];
    int count = 1, i;
    scanf("%[^
]s",str);
    for (i = 0; str[i] != NULL;i++)
    {
        if (str[i] == ' ')
            count++;    
    }
    printf("%d",count);
    return 0;
}