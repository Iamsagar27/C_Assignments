/*
5.Write a program which accept string from user and print below pattern. 

Input :   “Marvellous” 
Output :  m a r v e l l o u s    
          m a r v e l l o u s    
          m a r v e l l o u s    
          m a r v e l l o u s    
          m a r v e l l o u s    
          m a r v e l l o u s    
          m a r v e l l o u s    
          m a r v e l l o u s     
          m a r v e l l o u s     
          m a r v e l l o u s 

Input :   “PPA” 
Output :   p     
           p p     
           p p a
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
            if((*Helper>='A') && (*Helper<='Z'))
            {
                *Helper = *Helper + 32;
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
    char cStr[30];

    printf("Enter a String\n");
    scanf("%[^'\n']s",cStr);

    Pattern(cStr);
    
    return 0;
}



