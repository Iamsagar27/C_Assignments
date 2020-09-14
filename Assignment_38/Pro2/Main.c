/*
2.Write a program which accept string from user and print below pattern. 
Input :   “Marvellous” 
Output :   M a r v e l l o u s    
           M a r v e l l o u     
           M a r v e l l o     
           M a r v e l l     
           M a r v e l     
           M a r v e     
           M a r v     
           M a r     
           M a     
           M 
 
Input :   “PPA” 
Output :   P P A    
           P P     
           P

*/

#include<stdio.h>
    
void Pattern(char *str)
{
    int iCnt = 0;
    char *ptr;
    ptr = str;
    int i=0,j=0;

    if(str == NULL)
    {
        return ;
    }
    
    while(*str!='\0')
    {
        iCnt++;
        str++;
    }

    for(i = iCnt; ptr[i]!='\0',i >=0 ; i--)
    {
        for(j=0 ; j<i ; j++)
        {
            printf("%c\t",ptr[j]);
            
        }
        printf("\n");
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
