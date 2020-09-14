/*
4. Write a program which display smallest digits of all element from singly linear linked list. 
Function Prototype : 
void DisplaySmall( PNODE Head);  

Input linked list : |11|->|250|->|532|->|415|  
Output :   1 0 2 1 
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

void DisplaySmall(PNODE Head)
{
    int iDigit = 0 , iSmall = 0;
    
    while(Head != NULL)
    {
        iDigit = Head->data % 10;
        iSmall = iDigit;

        while(Head->data != '\0')
        {
            iDigit = Head->data % 10;
            if( iDigit < iSmall )
            {
                iSmall = iDigit;
            }
            Head->data = Head->data / 10 ;
        }
        printf("%d\t",iSmall);
        Head = Head->next;
    }
    printf("\n");
    
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

    DisplaySmall(First);

    return 0;
}















