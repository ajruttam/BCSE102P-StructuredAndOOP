/**********************************************************
Write a C program to copy one string to another string

Input
Input string: Hi Hello!
Output
Original string: Hi Hello!
Copied string: Hi Hello!
**********************************************************/

#include <stdio.h>
int main()
{
	char str1[100],*str2[100];
	scanf("%[^\n]%*c",&str1);
	for (int i = 0; str1[i] != '\0'; i++)
	{
		str2[i] = &str1[i];
	}
	printf("%s\n",str1);
	printf("%s",*str2);
	return 0;
}