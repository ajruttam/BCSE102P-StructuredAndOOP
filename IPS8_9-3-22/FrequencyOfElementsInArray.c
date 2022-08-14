/********************************************************
Write a program in C to count the frequency of each element of an array

Test Data:
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
25
12
43

Expected Output :
The frequency of all elements of an array :
25 occurs 1 times
12 occurs 1 times
43 occurs 1 times
********************************************************/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    for (int i = 0; i < n; i++){
        int c = 1,a = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]){
                a = 0;
                break;
            }
        }
        if (a){
            for (int j = i + 1; j < n; j++){
                if (arr[i] == arr[j]) c++;
            }
            printf("%d %d\n",arr[i],c);
        }
    }
    return 0;
}