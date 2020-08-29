/*
3. Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters. 
Input :   “MarvellouS” 
Output :   6 (8-2) 
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(char *str) 
{  
    int iCntC = 0 , iCntS = 0 , i = 0; 
 
    if(*str == ' ')
    {
        return -1;
    }
 
    while(*(str+i) != '\0')  
    {   
        if(*(str+i) >='A' && *(str+i) <='Z')
        {
            iCntC++;
        }
        if(*(str+i) >='a' && *(str+i) <='z')
        {
            iCntS++;
        } 
        i++;
    }

    return (iCntS - iCntC); 
}

int main() 
{  
    char arr[20];  
    int iRet = 0; 

    printf("Enter string :\t");  
    scanf("%[^\n]",arr);

    iRet = Difference(arr); 
 
    printf("%d",iRet); 
 
    return 0; 
}


