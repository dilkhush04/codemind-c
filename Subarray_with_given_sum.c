#include<stdio.h>
int main()
{
    int T,b[100],c[100];
    scanf("%d",&T);
     for(int k=0;k<T;k++)
        {
            int n,s;
            int max=-1,min=-1;
            scanf("%d",&n);
            scanf("%d",&s);
            int a[100];
            for(int i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            for(int i=0;i<n;i++)
            {
                int flag=0;
                int sum=0;
                for(int j=i;j<n;j++)
                {
                    sum=sum+a[j];
                    if(sum==s)
                    {
                        min=i+1;
                        max=j+1;
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                {
                    break;
                }
            }
            b[k]=min;
            c[k]=max;
        }
        for(int i=0;i<T;i++)
        {
            if(b[i]==-1 && c[i]==-1)
            printf("-1
");
            else
            printf("%d %d
",b[i],c[i]);
        }
}