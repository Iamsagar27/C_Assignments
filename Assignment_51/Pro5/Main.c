/*
5. Write a program which accept file name which contains information of student and marks. 
Display all students having that marks
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

void FileRead(char *FName , int marks)
{
    int fd = 0 , ret = 0 , i = 0;
    struct student sobj;

    fd = open(FName , O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file.\n");
        return;
    }

    printf("Name of the student whose marks are %d:\n",marks);
    printf("____________________\n");
    while((ret = read(fd,&sobj,sizeof(sobj))) != 0)
    {
        if(sobj.Marks == marks)
        {
            printf("%s\n",sobj.Name);
        }
    }
    printf("____________________");
    close(fd);

}
int main()
{
    char fname[20];
    int marks = 0;
    
    printf("Enter file name\n");
    scanf("%s",&fname);

    printf("Enter marks\n");
    scanf("%d",&marks);

    FileRead(fname,marks);

    return 0 ;
}
