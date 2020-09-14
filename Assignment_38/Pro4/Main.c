/*
4.Write a program which accept string from user and print below pattern. 
Input :   “Marvellous” 
Output :   M A R V E L L O U S    
           M A R V E L L O U S    
           M A R V E L L O U S    
           M A R V E L L O U S    
           M A R V E L L O U S     
           M A R V E L L O U S    
           M A R V E L L O U S    
           M A R V E L L O U S    
           M A R V E L L O U S    
           M A R V E L L O U S 

Input :   “PPA” 
Output :   P     
           P P     
           P P A
*/

#include<stdio.h>

void Pattern(char *Str)
{
    char *Helper;
    int iRow=0;
    int iCnt = 0;
    Helper = Str;
    if(Str==NULL)
    {
        return ;
    }
    while(*Helper!='\0')
    {
        iRow++;
        Helper++;
    }

    while(iCnt != iRow)
    {
        Helper = Str;
        while(*Helper!='\0')
        {
            if((*Helper>='a') && (*Helper<='z'))
            {
                *Helper = *Helper - 32;
            }
            printf("%c\t",*Helper);
            Helper++;
        }
        printf("\n");
        iCnt++;
    }
}

int main()
{
    char arr[40] = {'\0'};
    
    printf("Enter the string :\t");
    scanf("%[^'\n']s",arr);

    Pattern(arr);

    return 0;
}




