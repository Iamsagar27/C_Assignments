/*
5. Write application which accept file name from user and one string from user. Write that string at the end of file. 
Input :  Demo.txt   
        Hello World 
Output :  Write Hello World at the end of Demo.txt file 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>

void DisplayWholeFile(char FName[] ,char str[])
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
   
    while ((ret = read(fd,arr,100)) != 0)
    {

        while(str[i] != '\0')
        {
            i++;
        }
        

        while(arr[i] != '\0')
        {
            str[i] = arr[i];
            i++;
        }
        str[i] = '\0';

      
    }
    
    close(fd);

}
int main()
{
    char name[50] = {'\0'};
    char arr[50] = {'\0'};

    printf("Enter file name : \t");
    scanf("%s",name);

    printf("Enter the string :\t");
    scanf(" %[^'\n']s",arr);
    
    DisplayWholeFile(name,arr);

     printf("%s",arr);

    return 0;
}










