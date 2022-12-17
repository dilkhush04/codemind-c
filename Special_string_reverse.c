#include<stdio.h>
#include<string.h>
bool isAlphabet(char x)
{
    return ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'));
}
 
void reverse(char str[])
{
    int r = strlen(str) - 1, l = 0;
    while (l < r) {
        if (!isAlphabet(str[l]))
            l++;
        else if (!isAlphabet(str[r]))
            r--;
 
        else 
        {
           char temp = str[l];
            str[l] = str[r];
            str[r] = temp;
            l++;
            r--;
        }
    }
}
int main()
{
    char str[100];
    scanf("%s",str);
    reverse(str);
    printf("%s",str);
    return 0;
}