/**************************************************
Write a C program to find the largest element in an array

Sample I/O

Enter the number of elements (1 to 100): 5
Enter number1 : 23.9
Enter number2 : 122.2
Enter number3 : 122.3
Enter number4: -55.1
Enter number5 : -1.9

Largest number is 122.3
**************************************************/

#include <stdio.h>
int main()
{
    int n,max;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    printf("%d",max);
    return 0;
}