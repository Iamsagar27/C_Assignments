/*
3. Write a recursive program which accept string from user and count number of characters. 
Input : Hello 
Output : 5 
*/

#include<stdio.h>

int Strlen(char *str) 
{  
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') || (*str <= 'Z') || (*str >= 'a') || (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt ;

} 

int StrlenR(char *str) 
{  
    static int iCnt = 0;

    if(*str != '\0')
    {
       iCnt++;
       Strlen(str); 
        str++;
    }
    else 
    {
        return iCnt ;
    }
} 
int main() 
{  
    int iRet = 0;  
    char arr[20]; 
 
    printf("Enter string :\t");  
    scanf("%s",arr); 
 
    iRet = StrlenR(arr); 
 
    printf("%d",iRet);    
    
    return 0; 
} 


