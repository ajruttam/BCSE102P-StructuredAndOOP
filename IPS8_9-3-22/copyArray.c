/********************************************************
Write a program in C to copy the elements of one array into another array

Input the number of elements to be stored in the array :3
Input 3 elements in the array :
15
10
12

Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12
********************************************************/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for (int i = 0; i < n ; i++)
        scanf("%d",&arr1[i]);
    for (int i = 0; i < n ; i++) 
        arr2[i] = arr1[i];
    for (int i = 0; i < n ; i++)
        printf("%d\n",arr2[i]);
    return 0;
}