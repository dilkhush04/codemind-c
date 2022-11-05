#include<stdio.h>
int main()
{
    int n,i,j,k,a[100],T,p,c=0,b[100],x=0;
    scanf("%d",&T);
    for(p=0;p<T;p++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        
            for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    for(k=0;k<n;k++)
                    {
                        if((a[i]+a[j])==a[k])
                        {
                            c++;
                        }
                    }
                    
                }
           }
           b[p]=c;
           c=0;
          
        
    }
    
    

        for(i=0;i<T;i++)
        {
            if(b[i]==0)
            {
                printf("-1
");
            }
            else
            
            {printf("%d
",b[i]);}
        }
    
}