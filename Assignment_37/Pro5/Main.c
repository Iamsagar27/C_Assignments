/*
5. Write a program which accept string from user and replace each occurrence of first character of each word into capital case. 
Input :   “marvellous infosystems by Piyush khairnar” 
Output :  “Marvellous Infosystems By Piyush Khairnar” 
*/

#include<stdio.h>

void StrCap(char *Str)
{
    int iIndex = 1;
    if(Str==NULL)
    {
        return ;
    }
    while(*Str != '\0')
    {
        if(((*Str==' ') || (*Str=='\t')) && (iIndex==0))
        {
            Str++;
            iIndex = 1;            
        }
        if((*Str>='a') && (*Str<='z') && (iIndex==1))
        {
            *Str = *Str - 32;
            iIndex = 0;
        }
        else if((*Str>='A') && (*Str<='Z') && (iIndex==1))
        {
            iIndex = 0;
        }
        Str++;
    }
}


int main()
{
    char str[300];

    printf("Enter a String\n");
    scanf("%[^'\n']s",str);

    StrCap(str);

    printf("Modified String is : %s\n",str);

    return 0;
}
