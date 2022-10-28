#include <stdio.h>
int findGCD(int, int);

int main() {
    int n;
    int array[100] ;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int lcm = array[0];;
    int  gcd = array[0];
 
    //Loop through the array and find GCD
    //use GCD to find the LCM
    for(int i=1; i<n; i++){
      gcd = findGCD(array[i], lcm);
      lcm = (lcm*array[i])/gcd;
    }
    
    printf("%d", lcm);
}

//Function returns GCD of a and b
int findGCD(int a, int b){
    if(b==0)
        return a;
    return findGCD(b, a%b);
}