/*
2. Write a program which read all the information of students from the file. 
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

    printf("The Information of students :\n");
    printf("______________________\n");
    while((ret = read(fd,&sobj,sizeof(sobj))) != 0)
    {
        printf("Roll No\t:\t%d\n",sobj.Rollno);

        printf("Name\t:\t%s\n",sobj.Name);

        printf("Marks\t:\t%d\n",sobj.Marks);

        printf("-----------------------");

        printf("\n");

    }
    printf("______________________");
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




