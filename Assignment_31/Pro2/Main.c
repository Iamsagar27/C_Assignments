/*
2. Write a program which accept string from user and copy that characters of that string into another 
string by removing all white spaces. 
Input :   “Marvel   lous Pyth   on” 
Output :   “MarvellousPython” 
*/
#include<stdio.h>

void StrCpyX(char *src, char *dest) 
{  
    if((src == NULL) && (dest == NULL))
    {
        return;
    }
    
    while (*src != '\0')
    {
        if(*src == ' ')
        {
            *src++;
        }
        *dest = *src;
        *src++;
        *dest++;
    }
    
    *dest = '\0';
} 

void StrCpyXX(char *src, char *dest) 
{  
    if((src == NULL) && (dest == NULL))
    {
        return;
    }
    
    while (*src != '\0')
    {
        if(*src == ' ')
        {
            *src++;
        }
        *dest = *src;
        *src++;
        *dest++;
    }
    
    *dest = '\0';
}

int main() 
{  
    char arr[30] = "Marvel lous Pyth on";  
    char brr[30] = {'\0'};   
    
    StrCpyX(arr,brr);    
    
    printf("%s",brr);  
    
    return 0; 
}