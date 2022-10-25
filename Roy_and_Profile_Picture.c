#include<stdio.h> 
int main()
{ 
    int l,w,h,n; 
    scanf("%d",&l); 
    scanf("%d",&n); 
    for(int i=1;i<=n;i++)
    { scanf("%d%d",&w,&h); 
    if(w>=l&&h>=l)
    { if(w==h) 
    printf("ACCEPTED
");
    else 
    printf("CROP IT
"); 
        
    } 
    else
    printf("UPLOAD ANOTHER
");
    } return 0; 
    
}