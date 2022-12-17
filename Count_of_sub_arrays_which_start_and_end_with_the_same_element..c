#include<stdio.h>
void CoutsubArray(int a[], int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        c++;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
    }
    printf("%d",c);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    CoutsubArray(a, n);
    return 0;
}
