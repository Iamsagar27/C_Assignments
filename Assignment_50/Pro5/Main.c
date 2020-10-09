/*
    5. Write a program which accept file name which contains information of student and 
    display addition of marks of all sudents. 
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

int FileRead(char *Fname)
{
    int fd  = 0, ret = 0 ,sum = 0 , i = 0;
    struct student sobj;

    fd =open(Fname , O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file");
        return -1;
    }

    while((ret = read(fd,&sobj,sizeof(sobj)))!= 0)
    {
        sum = sum + sobj.Marks;
    }
 
    return sum ;
}

int main()
{
    char name[20];
    int ret = 0;

    printf("Enter file name\n");
    scanf("%s",name);
    
    ret = FileRead(name);

    printf("The addition of marks : %d",ret);

    return 0 ;
}






