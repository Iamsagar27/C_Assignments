/*
2. Write a program which accept string from user and count number of small characters. 
Input :   “Marvellous” 
Output :   9 
*/

#include<stdio.h>
#include<stdlib.h>

int CountSmall(char *str) 
{  
    int iCnt = 0 , i = 0; 

    if(*str == ' ')
    {
        return -1;
    }
    while(*(str+i) != '\0')  
    {   
        if(*(str+i)>='a' &&  *(str+i) <='z')    
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

    iRet = CountSmall(arr); 
 
    printf("%d",iRet); 
 
    return 0; 
}




