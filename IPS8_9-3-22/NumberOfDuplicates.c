/********************************************************
Write a program in C to count a total number of duplicate elements in an array

Test Data:
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
5
1
1
Expected Output :
Total number of duplicate elements found in the array is : 1
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
        int a = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]){
                a = 0;
                break;
            }
        }
        if (a)
        {
            for (int j = i + 1; j < n; j++)
                if (arr[i] == arr[j]) c++;
        }
    }
    printf("%d",c);
    return 0;
}