/*
2. Write application which accept file name from user and create that file. 
Input :  Demo.txt 
Output :  File created successfully
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>

int main()
{
    char name[50] = {'\0'} ;
    int fd  = 0;

    printf("Enter the file name :\t");
    scanf("%s",name);

    fd = creat(name,0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File created successfully with id %d",fd);
    }
    
    close(fd);

    return 0 ;
}












