/*
1. Write application which accept file name from user and open that file in read mode. 
Input :  Demo.txt 
Output :  File opened successfully. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char name[20] = {'\0'};
    int fd = 0;     
    
    printf("Enter file name\n");
    scanf("%s",name);
    
    fd = open(name,O_RDONLY); 
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File succesfully opened with fd %d\n",fd);
    }
    
    close(fd);
    return 0;   
}

















