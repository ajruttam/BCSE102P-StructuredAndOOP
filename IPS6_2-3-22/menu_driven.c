/***************************************************
Write a menu-driven program in c using switch case and do-while loop which performs the following operations:
1. Factorial of a number.
2.To find the number is even or odd
***************************************************/

#include <stdio.h>
int main()
{
    int t,n,fac = 1;
    scanf("%d%d",&n,&t);
    switch(t)
    {
        case 1:
        do
        {
            fac *= n;
            n--;
        }
        while(n>1);
        printf("%d",fac);
        break;

        case 2:
        if (n%2)
            printf("%d is an odd number",n);
        else
            printf("%d is an even number",n);
    }
    return 0;
}