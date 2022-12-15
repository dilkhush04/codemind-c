#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t-->0)
    {
        char str[100];
        scanf("%s",str);
        int a[100];
        int n=strlen(str);
        int min=999,max=-999;
        for(int i=0;i<strlen(str);i++)
        {
            int temp=(int)str[i];
            a[i]=temp;
            if(temp>max)
            max=temp;
            if(temp<min)
            min=temp;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        int k=0;
        int b[100];
        for(int i=min;i<=max;i++)
        {
            b[k++]=i;
        }
        for(int i=0;i<k;i++)
        {
            for(int j=i+1;j<k;j++)
            {
                if(b[i]>b[j])
                {
                    int temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
               
               flag=1;
            }
        }
        if(flag==0)
        printf("YES
");
        else
        printf("NO
");
    }
}