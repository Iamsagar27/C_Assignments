/*
4. Write application which accept file name from user and display size of file. 
Input :  Demo.txt 
Output :  File size is 56 bytes 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>

void DisplayWholeFile(char FName[])
{
    char arr[100] = {'\0'};
    int fd = 0 , ret = 0;
    int cnt = 0,i = 0;

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

        while(arr[i] != '\0')
        {
            if((arr[i] >= 'a') || (arr[i] <= 'z') ||  (arr[i] >= 'A')  || (arr[i] <= 'z'))
            {
                cnt++;
            }
            i++;
        }
    }
    printf("\n\nThe size is %d  byte",cnt);

    close(fd);

}
int main()
{
    char name[50] = {'\0'};
    
    printf("Enter file name :\t");
    scanf("%s",name);
    
    DisplayWholeFile(name);
    return 0;
}

