/*
2. Write a program which accepts file name from user and count number of small characters from that file. 
Input : Demo.txt 
Output : Number of small characters are 21 
*/

#include<stdio.h> 
#include<stdlib.h>
#include<fcntl.h>
#include<io.h> 

int CountSmall(char FName[])
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
            if(arr[i] >= 'a' && arr[i] <= 'z')
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
 
    iRet = CountSmall(FileName); 
 
    printf("\nNumber of Capital characters are %d",iRet);

    return 0;   
}


