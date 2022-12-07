#include<stdio.h>
int main()
{
    int n,a,i=0;
    scanf("%d",&n);
    for(a=1;a<n;a++){
        if(n%a==0)
        i=i+a;
    }
    if(i>n){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}