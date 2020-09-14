/*
1. Write a program which search first occurrence of particular element from singly linear linked list.  
Function should return position at which element is found.  
Function Prototype :int SearchFirstOcc( PNODE Head , int no );  

Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|  
Input element : 30  
Output : 3 
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

int SearchFirstOcc(PNODE Head,int iNo)
{
    PNODE temp = Head;
    int iCnt = 1;
    while(temp != NULL)
    {
        if((temp -> data)==iNo)
        {
            break;
        }
        iCnt++;
        temp = temp -> next;
    }
    if(temp==NULL)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
} 

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int iNo = 0;

    Insert(&First,70);
    Insert(&First,30);
    Insert(&First,50);
    Insert(&First,40);
    Insert(&First,30);
    Insert(&First,20);
    Insert(&First,10);
    Display(First);

    printf("\nEnter a number that you want to search\n");
    scanf("%d",&iNo);

    iRet = SearchFirstOcc(First,iNo);

    if(iRet==-1)
    {
        printf("No such element present in Linked List\n");
    }
    else
    {
        printf("Element found at position : %d\n",iRet);
    }

    return 0;
}


















