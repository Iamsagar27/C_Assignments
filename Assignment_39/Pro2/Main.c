/*
2. Write a program which search last occurrence of particular element from singly linear linked list.  
Function should return position at which element is found.  
Function Prototype :int SearchLastOcc( PNODE Head, int no );  

Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|  
Input element : 30  
Output : 6
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

int SearchLastOcc(PNODE Head, int no )
{
    int iCnt = 1;
    int iPos = 0;
    PNODE temp = Head;

    while(temp != NULL)
    {
        if((temp->data) == no)
        {
            iPos = iCnt;
        }
        iCnt++;
        temp = temp->next;
    }
    if(iPos == 0)
    {
        return -1;
    }
    else
    {
        return iPos;
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

    iRet = SearchLastOcc(First,iNo);

    if(iRet==-1)
    {
        printf("No such element present in Linked List\n");
    }
    else
    {
        printf("Last occurence ofelement at position : %d\n",iRet);
    }

    return 0;
}









