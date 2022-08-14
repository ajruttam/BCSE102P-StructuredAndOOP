/*************************************************************
ASCII

Any character is entered through the keyboard. Write a program to determine whether the character entered is a capital letter, a small case
letter, a digit or a special symbol.
(Hint : Refer ASCII table)
*************************************************************/

#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    int d = c;
    if (d>=48 && d<=57)
        printf("digit");
    else if (d>=58 && d<=64)
        printf("special symbol");
    else if (d>=65 && d<=90)
        printf("capital letter");
    else
        printf("small case letter");
    return 0;
}