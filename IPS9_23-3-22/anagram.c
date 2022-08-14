/****************************************************
Write a program in C to check whether two given strings are an anagram
****************************************************/

#include <stdio.h>
char* check(char a[100], char b[100])
{
    char t;
    for(int i = 0; a[i] != '\0'; i++)
        for (int j = i + 1; a[j] != '\0'; j++)
        {
            if(a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
            if(b[i] > b[j])
            {
                t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }

        for (int i = 0; a[i] != '\0'; i++)
        {
            if (a[i] != b[i]){
            return "not an anagram";
            }
        }
    return "anagram";
}

int main()
{
    char w1[10],w2[10];
    scanf("%s%s",&w1,&w2);
    printf("%s",check(w1,w2));
    return 0;
}