/*
3. Write a program which accept string from user and display it inn reverse order. 
Input :   “MarvellouS” 
Output :   “SuollevraM”
*/

#include<stdio.h>
#include<string.h>

void Reverse(char *str)
{
    strrev(str);

    printf(str);    
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string :\t");
    scanf("%[^\n]",&arr);

    Reverse(arr);

    return 0;
}
