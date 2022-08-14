/****************************************************
In the C program write a user-defined function to find minimum and maximum in given three numbers using parameter passing. Take
three numbers from the user.
****************************************************/
#include <stdio.h>

int min(int a,int b, int c)
{
    if (a < b)
    {
        if (a < c) return a;
        else return c;
    }
    else
    {
        if (b < c) return b;
        else return c;
    }
}

int max(int a,int b, int c)
{
    if (a > b)
    {
        if (a > c) return a;
        else return c;
    }
    else
    {
        if (b > c) return b;
        else return c;
    }
}


int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    printf("%d\n%d",min(x,y,z),max(x,y,z));
    return 0;
}