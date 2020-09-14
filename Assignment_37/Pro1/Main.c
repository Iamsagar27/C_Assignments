/*
1.Write a program which accept string from user count number of words from string  

Input :   “Marvellous Multi OS” 
Output :   3 
Input :   “          Marvellous Multi            OS       Pune” 
Output :   4 
*/

#include <stdio.h>

int WordCount(char *str) 
{     
    int i = 0,iCnt = 0;     
    char arr[30];

    if(str == NULL)     
    {  
        return -1;     
    }         
    
    while(*str != '\0')
    {
        if(*str == ' ' && *(str+1) != ' ')
        {
            iCnt++;
        }
        str++;
    }
    
    return iCnt; 
}
    
int main()
{
    char arr[30] = {'\0'};
    int iRet = 0;

    printf("Enter the string :\t");
    scanf("%[^'\n']s",arr);

    iRet = WordCount(arr);

    printf("Number of words in string : %d",iRet);

    return 0;
}