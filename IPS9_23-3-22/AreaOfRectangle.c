/****************************************************
Write a C program using a user-defined function to find the area of a rectangle. Take input from the user
****************************************************/

#include <stdio.h>
float area(float l,float b)
{
    float a = l * b;
    return a;
}

int main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    printf("%.1f",area(a,b));
    return 0;
}