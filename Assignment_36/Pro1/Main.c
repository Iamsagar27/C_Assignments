/*
1. Write a program which accepts 2 strings from user and concat N characters of second string after first string.
Value of N should be accepted from user. (Implement strncat() function). Note : If third parameter is greater 
than the size of second string then concat whole string after first string.

Input :   “Marvellous Infosystems”
          “Logic Building”    5 
Output :  “Marvellous Infosystems Logic” 

*/
#include<stdio.h>

void StrNCatX(char *src, char * dest, int iCnt) 
{    
    if(iCnt < 0)
    {
        iCnt = -iCnt ;
    }

    if((src == NULL) && (dest == NULL))
    {
        return;
    }    

    while (*src != '\0')
    {   
        src++;
    } 
    *src = ' ';
    src++; 
    
    while((* dest != '\0') && (iCnt != 0))  
    {   
        *src = *dest;
        dest++;
        src++;   
        iCnt--;  
    }   
    *dest = '\0'; 
} 

int main() 
{  
    //char arr[50] = "Marvellous Infosystems";  
    //char brr[30] = "Logic Building"; 
    int iCnt = 0;

    char arr[40] = {'\0'};
    char brr[40] = {'\0'};
    
    printf("Enter the first string :\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the second string :\n");
    scanf(" %[^'\n']s",brr);   

    printf("Accept a number :\t");
    scanf("%d",&iCnt); 
    
    StrNCatX(arr,brr,iCnt);

    printf("%s",arr);
    
    return 0; 
}





