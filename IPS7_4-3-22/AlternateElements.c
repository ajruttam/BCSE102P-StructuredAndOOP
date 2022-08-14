/**************************************************
C Program to Print the Alternate Elements in an Array

Sample I/O

Enter the number of elements : 5
Enter the elements :
3
5
6
7
9

The alternate elements are : 3 6 9
**************************************************/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    for (int j = 0; j < n; j+=2)
        printf("%d\n",arr[j]);
    return 0;
}