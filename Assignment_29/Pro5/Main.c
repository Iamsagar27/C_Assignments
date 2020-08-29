/*
5. Write a program which accept string from user reverse that string in place. 

Input :   “abcd” 
Output :   “dcba” 
Input :   “abba” 
Output :   “abba” 
*/
#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
    int iStart = 0 ,iEnd = 0;
    char temp = '\0';

    if(str == NULL)
    {
        return;
    }

    while (str[iEnd] != '\0')
    {
        iEnd++;
    }
    iEnd--;
    
    if(iStart <iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main() 
{  
    char arr[20];   

    printf("Enter string");  
    scanf("%[^'\n']s",arr); 
 
    StrRevX(arr); 
 
    printf("Modified string is %s",arr); 
 
    return 0; 
} 