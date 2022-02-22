#include<stdio.h>
int main(){
    
int a,n,i=1;
scanf("%d%d",&a,&n);
while(i<=n)
{
printf("%d x %d = %d",a,i,a*i);
printf("
");
i=i+2;
}
return 0;

}