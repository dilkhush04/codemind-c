#include<stdio.h>
int main()
{
    int n,x=0;
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        char str[3];
        scanf("%s",str);
        for(int i=0;i<3;i++)
        {
            if(str[i]=='+'){
                x+=1;
                break;
            }
            else
            if(str[i]=='-'){
                x-=1;
                break;
            }
        }
    }
    printf("%d",x);
    
}