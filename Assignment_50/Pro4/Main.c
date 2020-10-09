/*
  4. Write a program which accept file name which contains information of student and 
  display only marks of students. 
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

void FileRead(char *Fname)
{
    int fd  = 0, ret = 0 ;
    struct student sobj;

    fd =open(Fname , O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file");
        return;
    }

    printf("Marks of students :\n");
    printf("____________________\n");
    while((ret = read(fd,&sobj,sizeof(sobj)))!= 0)
    {
        printf("%d\n",sobj.Marks);
    }
    printf("____________________\n");
    close(fd);

}

int main()
{
    char name[20];
    
    printf("Enter file name\n");
    scanf("%s",name);
    
    FileRead(name);

    return 0 ;
}





