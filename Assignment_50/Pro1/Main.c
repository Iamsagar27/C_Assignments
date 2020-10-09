/*
  1. Write a program which accept oinformation of students from user and write that information into the file. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

struct student
{
    int Rollno;
    char Name[40];
    int Marks;
};

void FileWrite(char *FName)
{
    int size = 0 ,fd = 0 , i = 0;
    struct student sobj;

    fd = open(FName , O_WRONLY | O_CREAT , 0777);
    if(fd == -1)
    {
        printf("Unable to open file.\n");
        return;
    }

    printf("How many students :\t");
    scanf("%d",&size);

    for(i = 1 ; i<=size ; i++)
    {
        printf("Enter roll no of student :\t");
        scanf("%d",&sobj.Rollno);

        printf("Enter name of student :\t");
        scanf(" %s",&sobj.Name);

        printf("Enter marks of student :\t");
        scanf(" %d",&sobj.Marks);

        printf("\n");

        write(fd,&sobj,sizeof(sobj));
    }
    close(fd);
}

void FileRead(char *FName)
{
    int size = 0 ,fd = 0 , ret = 0;
    struct student sobj;

    fd = open(FName , O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file.\n");
        return;
    }

    printf("The Information of students :\n");

    while((ret = read(fd,&sobj,sizeof(sobj))) != 0)
    {
        printf("Roll No\t:\t%d\n",sobj.Rollno);

        printf("Name\t:\t%s\n",sobj.Name);

        printf("Marks\t:\t%d\n",sobj.Marks);

        printf("\n");

    }
    close(fd);

}

int main()
{
    char name[20];
    
    printf("Enter file name\n");
    scanf("%s",name);
    
    FileWrite(name);
    
    FileRead(name);

    return 0 ;
}













