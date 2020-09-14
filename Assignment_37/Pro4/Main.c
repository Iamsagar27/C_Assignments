/*
4. Write a program which accept string from user and copy the contents into another string by removing extra white spaces. 
Input :   “Marvel    lous    multi     OS” 
Output :   “Marvellous multi OS”
*/

#include<stdio.h>

void StrCpyX(char *src,char *dest)
{
    int iSpace = 2;

    if((src==NULL) || (dest==NULL))
    {
        return ;
    }
    while(*src != '\0')
    {
        
        if((iSpace>1) && ((*src==' ') || (*src=='\t')))
        {
            while(((*src==' ') || (*src=='\t')))
            {
                src++;
            }
        }
        else
        {
            iSpace = 0;
        }
        if((iSpace==0) && ((*src==' ') || (*src=='\t')))
        {
            *dest = *src;
            iSpace = 2;
        }
        else if((*src != ' ') || (*src != '\t'))
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter a String\n");
    scanf("%[^'\n']s",arr);

    StrCpyX(arr,brr);

    printf("Modified String is : %s\n",brr);

    return 0;
}










