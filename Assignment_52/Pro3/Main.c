/*
3. Write a program which accept file name which contains information of student and display the 
average marks of students.
*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

struct student
{
    int Rollno;
    char Name[40];
    int Marks;
};

int FileRead(char *FName)
{
    int fd = 0 , ret = 0 , sum = 0, iCnt = 0;
    struct student sobj;
    

    fd = open(FName , O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file.\n");
        return -1;
    }

    while((ret = read(fd,&sobj,sizeof(sobj))) != 0)
    {
        sum = sum + sobj.Marks ;
        iCnt++;    
    }
    close(fd);

    return sum/iCnt;

}
int main()
{
    char fname[20];
    int ret = 0;
    
    printf("Enter file name\n");
    scanf("%s",&fname);

    ret = FileRead(fname);

    printf("The average of marks : %d",ret);

    return 0 ;
}
