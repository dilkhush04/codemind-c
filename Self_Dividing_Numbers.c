#include<stdio.h>
int selfdividing(int n)
{
    if (n<10) 
return 1;
if(n%10==0)
{ return 0; }
int r,t=n,fg=0;
while(n!=0)
{ 
    r=n%10;
    if(t%r!=0)
    {
        fg=1;
        break;
    }
    n/=10;
    } 
    if (fg==0)
    { 
        return 1;
        }
    else 
    return 0;
    
}
    int main()
    { 
        int i,j; 
        scanf("%d",&i);
        scanf("%d",&j);
        for(int k=i;k<=j;k++) 
        { 
            if(selfdividing(k))
            printf("%d ",k); 
            
        } 
        return 0;
        
    }