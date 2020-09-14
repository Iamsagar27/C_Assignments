/*
4. Write a program which return largest element from singly linear linked list.  
Function Prototype :int Maximum( PNODE Head);  

Input linked list : |110|->|230|->|320|->|240|  
Output : 320 
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

int Maximum(PNODE Head)
{
    int iMax = 0;
    iMax = Head->data;

    while(Head != NULL)
    {
        if(iMax < Head->data)
        {
            iMax = Head->data;
        }
        Head = Head ->next; 
    }
    return iMax;
} 

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int iNo = 0;

    Insert(&First,240);
    Insert(&First,320);
    Insert(&First,230);
    Insert(&First,110);
    Display(First);

    iRet = Maximum(First);

    printf("\nMaximum element in list is : %d\n",iRet);

    return 0;
}

