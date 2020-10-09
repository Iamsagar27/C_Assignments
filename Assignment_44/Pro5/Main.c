/*
5.Write a recursive program which display below pattern.  
Output :   a b c d e f
*/


#include<stdio.h>

void DisplayR() 
{ 
    static int i = 1;

    if(i<=6)
    {
        printf(" %c ",'a' -1 +i);
        i++;
        DisplayR();
    }
} 

int main() 
{  
    DisplayR(); 
 
    return 0; 
}