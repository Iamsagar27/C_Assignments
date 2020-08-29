/*
3.Write a program which accept string from user and toggle the case. 
Input :   “Marvellous Multi OS” 
Output :   mARVELLOUS mULTI os 
*/

#include<stdio.h>

void strtogglex(char *str)
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
            *(str+i) = *(str+i) + 32;
        }
        else if(*(str+i) >= 'a' && *(str+i) <= 'z')
        {
            *(str+i) = *(str+i) - 32;
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

    strtogglex(arr);

    return 0 ;
}

