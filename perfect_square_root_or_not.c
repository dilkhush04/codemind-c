#include <stdio.h>
#include <math.h>
 
/*function definition*/
int isPerfectSquare(int number)
{
    int iVar;
    float fVar;
 
    fVar=sqrt((double)number);
    iVar=fVar;
 
    if(iVar==fVar)
        return 1;
    else
        return 0;
}
 
int main()
{
    int num;
    
    scanf("%d",&num);
 
    if(isPerfectSquare(num))
        printf("True");
    else
        printf("False");
     
    return 0;
}