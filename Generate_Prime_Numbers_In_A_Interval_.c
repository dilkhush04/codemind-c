#include<stdio.h>
int main()
{
    int low,high,i,j,c=0;
    scanf("%d",&low);
    scanf("%d",&high);
    for(i=low;i<high;i++)
    {
        if(i==1 || i==4)
        continue;
        c=0;
        for(j=2;j<i/2;j++)
        {
            if(i%j==0)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            printf("%d",i);
            printf("
");
        }
    }
}