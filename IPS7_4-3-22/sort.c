/**************************************************
Write a C program to sort the array in ascending order.

Sample input & output

Enter the value of N
6
Enter the numbers
3
78
90
456
780
200

The numbers arranged in ascending order are given below

3
78
90
200
456
780
**************************************************/

#include <stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
        
    for (int j = 0; j < n; j++)
        for (int k = j + 1; k< n; k++)
        {
            if (arr[j]>arr[k])
            {
                t = arr[j];
                arr[j] = arr[k];
                arr[k] = t;
            }
        }

    for (int i = 0; i < n; i++)
        printf("%d\n",arr[i]);
    return 0;
}