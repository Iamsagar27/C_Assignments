/*
5. Accept division of student from user and depends on the division display exam timing. There are 4 divisions 
in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. (Application 
should be case insensitive) 

Input :  C 
Output :  Your exam at 9.20 AM 

Input :  d 
Output :  Your exam at 10.30 AM 
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

void DisplaySchedule(char chDiv) 
{  
    switch (chDiv)
    {
        case 'a':
        case 'A':
            printf("Your exam at 7 AM");
            break;

        case 'b':
        case 'B':
            printf("Your exam at 8:30 AM");
            break;

        case 'c':
        case 'C':    
            printf("Your exam at 9:20 AM");
            break;

        case 'd':
        case 'D':
            printf("Your exam at 10:30 AM");
            break;
        
        default:
            break;
    }



} 

int main() 
{  
    char cValue = '\0';  
    BOOL bRet = FALSE;

    printf("Enter your devision");  
    scanf("%c",&cValue); 
 
    DisplaySchedule(cValue); 
 
    return 0; 
} 