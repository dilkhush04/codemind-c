#include <stdio.h>

int main()

{

    int i, num, temp = 0;

    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            temp=1;
            break;
        }
    } 
    if (temp==0)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
    return 0;
}