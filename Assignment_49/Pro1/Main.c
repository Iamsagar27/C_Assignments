/*
1. Write a program which accepts file name from user and count number of capital characters from that file. 
Input : Demo.txt 
Output : Number of capital characters are 23 
*/

#include<stdio.h> 
#include<stdlib.h> 
#include<fcntl.h>
#include<io.h> 

int CountCapital(char FName[])
{
    char arr[100] = {'\0'};
    int fd = 0 , ret = 0;
    int cnt = 0,i = 0;

    fd = open(FName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    
    while ((ret = read(fd,arr,100)) != 0)
    {
        while (arr[i] != '\0')
        {
            if(arr[i] >= 'A' && arr[i] <= 'Z')
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
 
    printf("Enter file name :\t");  
    scanf("%s",FileName); 
 
    iRet = CountCapital(FileName); 
 
    printf("\nNumber of Capital characters are %d",iRet);

    return 0;   
}











