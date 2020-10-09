/*
3. Write application which accept file name from user and read all data from that file and 
display contents on screen. 
Input :  Demo.txt 
Output :  Display all data of file.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>

void DisplayWholeFile(char FName[])
{
    char arr[100] = {'\0'};
    int fd = 0 , ret = 0;

    fd = open(FName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return;
    }
    printf("Data from the file is : \n");

    while ((ret = read(fd,arr,100)) != 0)
    {
        write(1,arr,ret);
    }

    close(fd);

}
int main()
{
    char name[50] = {'\0'};
    
    printf("Enter file name\n");
    scanf("%s",name);
    
    DisplayWholeFile(name);
    return 0;
}


