/*
4. Write a program which accepts file name and one character from user and count number of occurrences of that characters from that file. 
Input : Demo.txt    ‘M’ 
Output : Frequency of M is 7 
*/


#include<stdio.h> 
#include<stdlib.h>
#include<fcntl.h>
#include<io.h> 

int CountChar(char FName[],char ch)
{
    char arr[100] = {'\0'};
    int fd = 0 , ret = 0;
    int cnt = 0,i = 0;

    fd = open(FName,O_RDONLY);

    if(fd == -1)
    {
        printf("\nUnable to open file\n");
        return -1;
    }
    
    while ((ret = read(fd,arr,100)) != 0)
    {
        while (arr[i] != '\0')
        {
            if(arr[i] == ch)
            {
                cnt++;
            }
            i++;
        }
    }
    close(fd);
    return cnt;
}

int main() 
{  
    char FileName[30];  
    int iRet = 0; 
    char cValue ;
 
    printf("Enter file name :\t");  
    scanf("%s",FileName); 

    printf("Enter the character :\t");  
    scanf(" %c",&cValue); 
 
    iRet = CountChar(FileName,cValue); 
 
    printf("\nFrequency is %d",iRet);

    return 0;   
}











