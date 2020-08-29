/*
4. Write a program which accept string from user and display only digits from that string. 
Input :   “marve89llous121” 
Output :   89121 
Input :   “Demo” 
Output :
*/

#include<stdio.h>


void DisplayDigit(char *str) 
{
    int i = 0 ;

    if(*str == ' ')
    {
        return ;
    }

    while (*(str+i) != '\0')
    {
        if(*(str+i) >= 48 && *(str+i) <= 57)
        {
            printf("%c",*(str+i));
        }
        i++;
    }
}

int main()
{
    char arr[20];

    printf("Enter the string :\t");
    scanf("%[^\n]",&arr);

    DisplayDigit(arr);

    return 0 ;
}