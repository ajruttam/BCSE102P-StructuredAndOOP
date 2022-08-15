/**********************************************************
Write a C program to sort an array using pointers

Input
Enter array size: 10
Enter elements in array: 10 -1 0 4 2 100 15 20 24 -5
Output:
Array in ascending order: -5, -1, 0, 2, 4, 10, 15, 20, 24, 100,
Array in descending order: 100, 24, 20, 15, 10, 4, 2, 0, -1, -5,
**********************************************************/

#include <stdio.h>
void sort(int n, int *p)
{
    int t;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (*(p + i) > *(p + j))
            {
                t = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = t;
            }
        }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sort(n, arr);
    int i;
    for (i = 0; i < n; i++)
        printf("%d%s", arr[i], (i == n - 1) ? "\n" : ", ");
    for (i = i - 1; i >= 0; i--)
        printf("%d%s", arr[i], (i == 0) ? "" : ", ");
    return 0;
}