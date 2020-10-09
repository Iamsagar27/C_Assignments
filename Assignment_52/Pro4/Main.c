/*
4. Write a program which accept file name which contains information of student and display the information 
based on the class (First class (60 to 100), Second class (50 to 60), Pass class (0 to 50)). 
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
    

    fd = open(FName , O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file.\n");
        return;
    }

    printf("_____________________________\n");
    while((ret = read(fd,&sobj,sizeof(sobj))) != 0)
    {
           if(sobj.Marks >=60)
           {
               printf("\n%s\t:\tFirst class",sobj.Name);
           }
           else if(sobj.Marks >50 && sobj.Marks <= 60)
           {
               printf("\n%s\t:\tSecond class",sobj.Name);
           }
           else if(sobj.Marks > 0 && sobj.Marks <= 50)
           {
               printf("\n%s\t:\tPass class",sobj.Name);
           }
           else
           {
               printf("\nInvalid Marks");
           }
    }
    printf("\n_____________________________");
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




