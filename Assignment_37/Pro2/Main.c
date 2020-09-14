/*
2. Write a program which accept string from user and return length of largest word. 

Input :   “Marvellous Multi OS Infosystems” 
Output :   11 
*/
#include<stdio.h>

int WordCount(char *str)
{
    int iMax = 0;
    int iCnt = 0;
    int iSpace = 1;
    
    if(str==NULL)
    {
        return -1;
    }
    while(*str != '\0')
    {
        if((iSpace==1) && ((*str==' ') || (*str=='\t')))
        {
            str++;
            iCnt = 0;
        }
        else
        {
            iSpace=0;
        }
        if((((*str>='a') && (*str<='z')) || ((*str>='A') && (*str<='Z')) || (iSpace == 0)))
        {
            iCnt++;
            iSpace = 1;
        }
        if(iCnt>iMax)
        {
            iMax = iCnt;
        }
        str++;
    }

    return iMax;
}

int main()
{
    char str[30];
    int iRet = 0;

    printf("Enter a String\n");
    scanf("%[^'\n']s",str);

    iRet = WordCount(str);

    printf("Length of largest word is  %d\n",iRet);
    
    return 0;
}

