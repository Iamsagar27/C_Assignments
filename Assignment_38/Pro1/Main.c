/*
1.Write a program which accept string from user and print below pattern. 
Input :   “Marvellous” 
Output :   M a r v e l l o u s    
           M a r v e l l o u s    
           M a r v e l l o u s    
           M a r v e l l o u s    
           M a r v e l l o u s    
           M a r v e l l o u s    
           M a r v e l l o u s    
           M a r v e l l o u s     
           M a r v e l l o u s     
           M a r v e l l o u s 

Input :   “PPA” 
Output :   P P A    
           P P A    
           P P A
*/

#include<stdio.h>

void Pattern(char *str)
{
    int iCnt = 0;
    char *ptr;
    ptr = str;

    if(str == NULL)
    {
        return ;
    }

    while(*str!='\0')
    {
        iCnt++;
        str++;
    }
    

    while(iCnt > 0)
    {
        printf("%s\n",ptr);
        iCnt--;
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
