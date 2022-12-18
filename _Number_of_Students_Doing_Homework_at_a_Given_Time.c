#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int star[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&star[i]);
    }
    int m;
    scanf("%d",&m);
    int end[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&end[i]);
    }
    int k,c=0;
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if(k>=star[i] && k<=end[i])
        {
            c++;
        }
    }
    printf("%d",c);
}