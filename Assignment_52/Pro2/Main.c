/*
2. Write a program which accept file name which contains information of student and display the 
information of student having lowest marks. 
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

void FileRead(char *FName)
{
    int fd = 0 , ret = 0;
    struct student sobj;
    int LMarks = 100 ;

    fd = open(FName , O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file.\n");
        return;
    }

    while((ret = read(fd,&sobj,sizeof(sobj))) != 0)
    {
        if(sobj.Marks < LMarks)
        {
            LMarks = sobj.Marks;
        }
    }

    lseek(fd,0,SEEK_SET);

    printf("Information of the student having lowest marks:\n");
    printf("____________________\n");
    while((ret = read(fd,&sobj,sizeof(sobj))) != 0)
    {
        if(LMarks == sobj.Marks )
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
    
    printf("Enter file name\n");
    scanf("%s",&fname);

    FileRead(fname);

    return 0 ;
}


