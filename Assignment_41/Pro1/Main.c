/*
1. Write a program which reverse each element of singly linked list.  
Function Prototype : 
void Reverse( PNODE Head);  
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|  
Output :  |11|->|82|->|71|->|14|->|6|->|98| 
*/

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE Head , int iValue)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn ->data = iValue ;
    newn ->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn ;
    }
    else 
    {
        newn ->next = *Head ;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    
    while (Head != NULL)
    {
        printf("| %d | ->",Head ->data);
        Head = Head-> next;    
    }
    printf("NULL\n");
}

void Reverse(PNODE Head)
{
    int iDigit = 0;
    int iRev = 0;

    while(Head != NULL)
    {
        iRev = 0;
        while(Head->data != 0)
        {
            iDigit = Head->data % 10;
            iRev = ((iRev * 10) + (iDigit));
            Head->data = Head->data / 10;
        }
        //Head->data = iRev;
        printf("%d \t",iRev);
        Head = Head->next;
    }
}


int main()
{
    PNODE First = NULL;
    int no = 0 , i = 0 , num = 0;

    printf("Enter the number of elements :\n");
    scanf("%d",&num);
    
    for(i = 1 ; i <=num ; i++)
    {
        printf("Enter the number :\t");
        scanf("%d",&no);
        InsertFirst(&First,no);
    }

   // Display(First);

    Reverse(First);

    return 0;
}








