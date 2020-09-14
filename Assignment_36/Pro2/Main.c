/*
2.  Write a program which 2 strings from user and check whether contents of two strings are equal or not. 
(Implement strcmp() function). 

Input :   “Marvellous Infosystems”
          “Marvellous Infosystems” 
Output :  TRUE 
*/

#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL StrCmpX(char *src, char * dest) 
{  
    if((src == NULL) && (dest == NULL))
    {
        return FALSE;
    }  
    if((*src != '\0') && (*dest != '\0'))  
    {   
        src++;
        dest++;
    }    
    if(*src == *dest)  
    {   
        return TRUE; 
    }   
    else  
    {   
        return FALSE;  
    } 
} 

int main() 
{  
    BOOL bret = TRUE;  
    //char arr[50] = "Marvellous Infosystems";  
    //char brr[30] = "Marvellous nfosystems";     
    char arr[40] = {'\0'};
    char brr[40] = {'\0'};
    
    printf("Enter the first string :\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the second string :\n");
    scanf(" %[^'\n']s",brr);
    
    bret = StrCmpX(arr,brr);    
    
    if(bret == TRUE)  
    {    
        printf("Both strings are equal");  
    }  
    else  
    {    
        printf("Both strings are not equal");  
    }   
    
    return 0; 
}










