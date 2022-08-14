/****************************************************
Write a program in C to check a given number is even or odd using the function
****************************************************/

#include <stdio.h>
char *evenodd(int a)
{
    if (a%2) 
        return "odd";
    else 
        return "even";
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%s",evenodd(a));
    return 0;
}