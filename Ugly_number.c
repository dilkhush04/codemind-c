#include<stdio.h>
int main()
{ 
    int num;
    scanf("%d",&num);
    while(num!=1) 
    { if(num%2==0)
    { num=num/2; }
    else if(num%3==0)
    { num=num/3; } 
    else if(num%5==0) 
    { num=num/5; }
    else 
    { 
        printf("Not Ugly Number");
    return 0; 
        
    } 
        
    }
    printf("Ugly Number"); 
    return 0;
    
}