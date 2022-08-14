/*************************************************************
Reverse the number

If a five-digit number is input through the keyboard, write a program to reverse the number
*************************************************************/

#include <stdio.h>
int main()
{
    int n,r = 0;
    scanf("%d",&n);
    while (n!=0)
    {
        r = r*10;
        r = r + n%10;
        n = n/10;
    }
    printf("%d",r);
    return 0;
}