/*
5. Write a program which return smallest element from singly linear linked list.  
Function Prototype :int Minimum( PNODE Head);  

Input linked list : |110|->|230|->|20|->|240|->|640|  
Output : 20
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

void Insert(PPNODE Head , int value)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("\n");
    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head ->next;
    }
    printf("NULL\n");
}

int Minimum(PNODE Head)
{
    int iMin = 0;
    iMin = Head->data;

    while(Head != NULL)
    {
        if(iMin > Head->data)
        {
            iMin = Head->data;
        }
        Head = Head ->next; 
    }
    return iMin;
} 

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int iNo = 0;

    Insert(&First,640);
    Insert(&First,240);
    Insert(&First,20);
    Insert(&First,230);
    Insert(&First,110);
    Display(First);

    iRet = Minimum(First);

    printf("\nMinimum element in list is : %d\n",iRet);

    return 0;
}













