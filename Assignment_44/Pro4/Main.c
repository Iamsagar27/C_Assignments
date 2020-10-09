/*
4.Write a recursive program which display below pattern.  
Output :   A B C D E F
*/

#include<stdio.h>

void Display()
{
    int i = 0;

    for (i = 1; i <=6; i++)
    {
        printf("%c\t",'A' -1 +i);
    }

}
void DisplayR() 
{ 
    static int i = 1;

    if(i<=6)
    {
        printf(" %c ",'A' -1 +i);
        i++;
        DisplayR();
    }
} 

int main() 
{  
    DisplayR(); 
 
    return 0; 
}
