/*
2.Write a program which accept string from user and convert it into upper case. 
Input :   “Marvellous Multi OS” 
Output :   MARVELLOUS MULTI OS 
*/

#include<stdio.h>

void struprx(char *str) 
{   
    int i = 0;

    if(*str == ' ')
    {
        return ;
    }    

    while (*(str+i) != '\0')
    {
        if(*(str+i) >= 'a' && *(str+i) <= 'z')
        {
            *(str+i) = *(str+i) - 32 ;
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

    struprx(arr);

    return 0 ;
}