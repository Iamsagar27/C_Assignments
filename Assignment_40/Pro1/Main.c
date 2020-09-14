/*
1. Write a program which displays all elements which are perfect from singly linear linked list.  
Function Prototype :int DisplayPerfect( PNODE Head);  

Input linked list : |11|->|28|->|17|->|41|->|6|->|89|  
Output :  6 28 
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

void DisplayPerfect(PNODE Head)
{
    PNODE temp = Head;
    int iSum = 0,iCnt = 0;

    printf("\nPerfect numbers are : ");

    while(temp != NULL)
    {
        iSum = 0;
        for(iCnt=((temp->data)/2);iCnt>=1;iCnt--)
        {
            if((temp->data % iCnt)==0)
            {
                iSum = iSum + iCnt;
            }
            if(iSum > temp->data)
            {
                break;
            }
        }
        if(iSum==temp->data)
        {
            printf("%d\t",temp->data);
        }
        temp = temp->next;
    }
    printf("\n");
} 

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int iNo = 0;

    Insert(&First,89);
    Insert(&First,6);
    Insert(&First,41);
    Insert(&First,17);
    Insert(&First,28);
    Insert(&First,11);
    Display(First);

    DisplayPerfect(First);

    return 0;
}
