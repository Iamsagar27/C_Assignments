/*
5. Accept string from user and check whether the string is palindrome or not without considering its case.   
Input :   “1abccBA1” 
Output :   TRUE 
*/
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL StrPallindrome(char *str) 
{  
    char *iStart ,*iEnd;
    iStart = iEnd = str;

    if(str == NULL)
    {
        return FALSE;
    }

    while(*str !='\0')
    {
        if((*str >='A') && (*str <='Z'))
        {
            *str = *str + 32;
        }
        iEnd++;
        str++;
    }
    iEnd--;

    while( iStart <= iEnd)
    {
        if(*iStart != *iEnd)
        {
            break;
        }

        iStart++;
        iEnd--;
    }

    if(iStart  > iEnd)
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
    BOOL bret = FALSE;  
    char arr[20] = {'\0'};

    printf("Enter the string :\t");
    scanf("%s",arr); 
 
    bret = StrPallindrome(arr); 
 
    if(bret == TRUE)  
    {   
        printf("String is pallindrome\n");  
    } 
    else  
    {   
        printf("String is not pallindrome\n");  
    }  
    
    return 0; 
}