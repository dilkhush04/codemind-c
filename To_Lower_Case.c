#include <stdio.h>
#include <ctype.h> 
#include<string.h>
  
int main() {
  
  char s[100];
  scanf("%s",s);
  for(int i=0;i<strlen(s);i++)
  {
      s[i]=tolower(s[i]);
  }
  printf("%s", s);
  
  return 0;
}