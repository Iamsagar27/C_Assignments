/*
3. Write a program which 2 strings from user and check whether first N contents of two strings are equal or not. 
(Implement strcmp() function). Note : If third parameter is greater than the size of second string then concat 
whole string after first string. 

Input :   “Marvellous Infosystems”    
          “Marvellous Logic Building”    10 
Output :  TRUE 
*/

#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL StrNCmpX(char *src, char * dest ,int iCnt) 
{  
    if(iCnt < 0)
    {
        iCnt = -iCnt ;
    }

    if((src == NULL) && (dest == NULL))
    {
        return FALSE;
    }    

    while((*src!='\0') && (*dest != '\0') && (iCnt != 0))
    {
        if(*src != *dest)
        {
            break;
        }
        iCnt--;
        *src++;
        *dest++;
    }

    if((iCnt == 0) || (*src == '\0') || (*dest == '\0'))
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
    BOOL bret =0;
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};
    int iNo=0;
    
    printf("Enter the first string:\t");
    scanf("%[^\n]",arr);

    printf("Enter the second string:\t");
    scanf(" %[^\n]",brr);

    printf("Enter the number:\t");
    scanf("%d",&iNo);

    bret = StrNCmpX(arr,brr,iNo);

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