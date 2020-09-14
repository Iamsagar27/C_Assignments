/*
1. Write a program which accept string from user and copy that characters of that string into another string 
in reverse order. 

Input :   “Marvellous Python” 
Output :   “nohtyP suollevraM” 
*/
#include<stdio.h>

void StrCpyRev(char *src, char *dest) 
{  
    if((src == NULL) || (dest == NULL))
    {
        return ;
    }

    while(*src != '\0')
    {
        src++;
    }
    src--;

    while(*src != '\0')
    {
        *dest = *src;
        *src--;
        *dest++;
    }
    *dest = '\0';

} 

int main() 
{  
    char arr[30] = "Marvellous Python";  
    char brr[30]  ={'\0'};        
    
    StrCpyRev(arr,brr);    
    
    printf("%s",brr);  

    return 0; 
} 