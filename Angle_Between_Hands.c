#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    float ans;
    scanf("%d:%d",&n,&m);
    ans=abs(n*30-(11*m)/2.0);
    if(ans<360-ans)
    {
        if(ans>(int)ans)
        {
            printf("%.1f",ans);
        }
        else
        {
            printf("%.1f",ans);
        }
    }
    else
    {
        if(360-ans>(int)(360-ans))
        {
            printf("%.1f",360-ans);
        }
        else
        {
            printf("%.1f",360-ans);
        }
    }
    return 0;
}