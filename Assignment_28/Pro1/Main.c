/*
1.Write a program which accept string from user and convert it into lower case. 

Input :   “Marvellous Multi OS” 
Output :   marvellous multi os 
*/

#include<stdio.h>

void strlwrx(char *str) 
{   
    int i = 0;

    if(*str == ' ')
    {
        return ;
    }    

    while (*(str+i) != '\0')
    {
        if(*(str+i) >= 'A' && *(str+i) <= 'Z')
        {
            *(str+i) = *(str+i) + 32 ;
        }
        i++;
    }
    printf("%s",str);
}

int main()
{
    char arr[20];

    printf("Enter the string :\t");
    scanf("%[^\n]",&arr);

    strlwrx(arr);

    return 0 ;
}