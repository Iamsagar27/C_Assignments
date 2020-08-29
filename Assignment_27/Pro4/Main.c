/*
4. Write a program which accept string from user and check whether it contains vowels in it or not. 
Input :   “marvellous” 
Output :   TRUE 
Input :   “Demo” 
Output :   TRUE 
Input :   “xyz” 
Output :   FALSE 
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
#define ERROR -1

typedef int BOOL;

BOOL ChkVowel(char *str) 
{   
    int iVowel = 0, i = 0; 
 
    if(*str == ' ')
    {
        return -1;
    }
 
    while(*(str+i) != '\0')  
    {   
        if(*(str+i) =='A' || *(str+i) =='E' || *(str+i) =='I' || *(str+i) =='O' || *(str+i) =='U' || 
           *(str+i) =='a' || *(str+i) =='e' || *(str+i) =='i' || *(str+i) =='o' || *(str+i) =='u' )
        {
            iVowel = TRUE;
        }
        else
        {
            iVowel = FALSE;
        } 
        i++;
    }
    if(iVowel == TRUE)
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
    char arr[20];
    BOOL bRet = '\0';

    printf("Enter the string :\t");
    scanf("%[^\n]",&arr);

    bRet = ChkVowel(arr);

    if(bRet==TRUE)
    {
        printf("String contains vowel");
    }
    else
    {
        printf("String does not contains vowel");
    }
    

    return 0;
}














