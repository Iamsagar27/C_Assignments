/*
1. Write a program which accept file name which contains information of student as well as accept name of student and 
dsplay only information of that student. 
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

void FileRead(char *FName , char name[])
{
    int fd = 0 , ret = 0;
    struct student sobj;

    fd = open(FName , O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file.\n");
        return;
    }

    printf("Information of the student :\n");
    printf("____________________\n");
    while((ret = read(fd,&sobj,sizeof(sobj))) != 0)
    {
        if(strcmp(sobj.Name,name)== 0)
        {
            printf("Roll no\t:%d\n",sobj.Rollno);
            printf("Name\t:%s\n",sobj.Name);
            printf("Marks\t:%d\n",sobj.Marks);
        }
    }
    printf("____________________");
    close(fd);

}
int main()
{
    char fname[20];
    char name[20];
    
    printf("Enter file name\n");
    scanf("%s",fname);

    printf("Enter name of the student :\t");
    scanf(" %s",name);
    
    FileRead(fname,name);

    return 0 ;
}





