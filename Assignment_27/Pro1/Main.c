/*
1.Write a program which accept string from user and count number of capital characters. 

Input :   “Marvellous Multi OS” 
Output :   4 
*/

#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *str) 
{  
    int iCnt = 0 ,i = 0;
    char cString = '\0'; 

    if(*str == ' ')
    {
        return -1;
    }
    
    while(*(str+i) != '\0')  
    {   
        if(*(str+i) >='A' && *(str+i)<='Z')
        {
            iCnt++;
        }
        i++;
    } 
 
    return iCnt; 
} 

int main() 
{  
    char arr[20];  
    int iRet = 0; 
 
    printf("Enter string :\t");  
    scanf("%[^\n]",arr); 

    iRet = CountCapital(arr); 
 
    printf("%d",iRet); 
 
    return 0; 
}

















