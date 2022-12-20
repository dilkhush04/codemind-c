#include<stdio.h>
#include<math.h>
     bool prime(int n)
     {
         if(n<2)
         return false;
         for(int i=2;i<=sqrt(n);i++)
         {
             if (n%i==0)
             return false;
         }
         return true;
     }
     int main()
     {
         int n,m,c=0;
         scanf("%d%d",&n,&m);
             
             for(int i=n;i<=m;i++)
             {  
                if(prime(i))
                    {
                        c++;
                    }
                 
             }
             printf("%d",c);
            
     }
