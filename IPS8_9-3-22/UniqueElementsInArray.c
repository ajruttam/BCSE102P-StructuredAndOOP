/********************************************************
Write a program in C to print all unique elements in an array

Input the number of elements to be stored in the array: 4
Input 4 elements in the array :
3
2
2
5

Expected Output :
The unique elements found in the array are:
3 5
********************************************************/

#include <stdio.h>
int main()
{
    int n,c = 0;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    for (int i = 0; i < n; i++)
    {
        int a = 1,b = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]){
                a = 0;
                break;
            }
        }

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                b = 0;
                break;
            }
        }

        if (a && b)
            printf("%d\n",arr[i]);
    }
    return 0;
}