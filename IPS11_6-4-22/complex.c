/************************************************
C Program to Add Two Complex Numbers by Passing Structure to a Function

Tips: use the datatype ‘complex’ for complex numbers processing
************************************************/

#include <stdio.h>
typedef struct complex
{
    float real;
    float imag;
} complex;

complex add(complex n1, complex n2)
{
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}
int main()
{
    complex n1, n2, result;
    printf("For 1st complex number, ");
    printf("Enter the real and imaginary parts: \n");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("For 2nd complex number, ");
    printf("Enter the real and imaginary parts: \n");
    scanf("%f %f", &n2.real, &n2.imag);
    result = add(n1, n2);
    printf("The sum of the given 2 complex numbers are %.1f + %.1fi", result.real, result.imag);
    return 0;
}
