#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r;
    scanf("%f%f%f",&p,&r,&t);
    printf("%.2f",p*pow((1+0.01*r),t));
}