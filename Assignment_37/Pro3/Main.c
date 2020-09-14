/*
3. Write a program which accept string from user and reverse each word in place. 

Input :   “Marvellous Multi OS” 
Output :   “suollevraM itluM SO”
*/

#include<stdio.h>

void StrWrdRev(char *str)
{
    int iSpace = 1;
    char *First,*Last,Temp='\0';
    
    First=Last=str;

    if(str==NULL)
    {
        return ;
    }

    while(*str != '\0')                
    {   
        First = Last = str;

        while((*str != ' ') && (*str !='\0'))
        {
            Last++;
            str++;
        }
        Last--;
        
        iSpace = 1;
        
        while(First<=Last)
        {
            Temp = *First;
            *First = *Last;
            *Last = Temp;
            First++;
            Last--;
        }
        str++;
    }
}

int main()
{
    char str[30];

    printf("Enter a String\n");
    
    scanf("%[^'\n']s",str);

    StrWrdRev(str);

    printf("Modified String is : %s\n",str);

    return 0;
}