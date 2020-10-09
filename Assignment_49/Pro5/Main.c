/*
5. Write a program which accepts file name and one count from user and read that number of characters 
from starting position. 
Input : Demo.txt  12 
Output : Display first 12 characters from Demo.txt 
*/


#include<stdio.h> 
#include<stdlib.h>
#include<fcntl.h>
#include<io.h> 

void DisplayN(char FName[],int iSize)
{
    char arr[100] = {'\0'};
    int fd = 0 , ret = 0;
    int cnt = 0,i = 0;
    char str[40] = {'\0'};

    fd = open(FName,O_RDONLY);

    if(fd == -1)
    {
        printf("\nUnable to open file\n");
        return;
    }
    
    while ((ret = read(fd,arr,100)) != 0)
    {
        while ((arr[i] != '\0') && (iSize != 0))
        {
            str[i] = arr[i];
            i++;
            iSize--;
        }
        str[i] = '\0';

        printf("%s",str);
    }
    close(fd);
    
}

int main() 
{  
    char FileName[30];  
    int iValue = 0;
 
    printf("Enter file name :\t");  
    scanf("%s",FileName); 

    printf("Enter the number of character :\t");  
    scanf(" %d",&iValue); 
 
    DisplayN(FileName,iValue); 

    return 0;   
}







