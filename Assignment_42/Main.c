#include<stdio.h> 
#include<stdlib.h> 

struct Node 
{     
    int iData;     
    struct Node *next;     
    struct Node *prev; 
}; 

typedef struct Node NODE; 
typedef struct Node * PNODE; 
typedef struct Node ** PPNODE; 

void InsertFirst(PPNODE Head,PPNODE Tail,int iNo)
{
    PNODE NewNode = NULL;
    NewNode = (PNODE)malloc(sizeof(NODE));
    NewNode->iData = iNo;
    NewNode->next = NULL;
    NewNode->prev = NULL;

    if(*Head==NULL && *Tail==NULL)
    {
        *Head = NewNode;
        *Tail = NewNode;
    }
    if((*Head)->prev == *Tail)
    {
        NewNode->next= *Head;
        (*Head)->prev = NewNode;
        *Head = NewNode;
    }
    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}


void InsertLast(PPNODE Head,PPNODE Tail,int iNo)
{
    PNODE NewNode = (PNODE)malloc(sizeof(NODE));
    NewNode->iData = iNo;
    NewNode->next = NULL;
    NewNode->prev = NULL;

    if(*Head==NULL && *Tail==NULL)
    {
        *Head = NewNode;
        *Tail = NewNode;
    }
    else
    {
        (*Tail)->next = NewNode;
        NewNode->prev = *Tail;
        *Tail = NewNode;
    }
    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}



void InsertAtPos(PPNODE Head,PPNODE Tail,int iNo,int iPos)
{
    int iCount = Count(*Head,*Tail);
    PNODE Temp = *Head;
    int iCnt = 1;
    if(iPos<1 || iPos>iCount+1)
    {
        printf("Error : Invalid Position\n");
        return ;
    }
    else if(iPos==1)
    {
        InsertFirst(Head,Tail,iNo);
    }
    else if(iPos==iCount+1)
    {
        InsertLast(Head,Tail,iNo);
    }
    else
    {
        PNODE NewNode = (PNODE)malloc(sizeof(NODE));
        NewNode->iData = iNo;
        NewNode->next = NULL;
        NewNode->prev = NULL;\

        while(iCnt != iPos)
        {
            Temp = Temp->next;
            iCnt++;
        }
        NewNode->next = Temp;
        NewNode->prev = Temp->prev;
        Temp->prev->next = NewNode;
        Temp->prev = NewNode; 
    }
}

void DeleteFirst(PPNODE Head,PPNODE Tail)
{
    if(*Head==NULL && *Tail==NULL)
    {
        return ;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Head = (*Head)->next;
        free((*Head)->prev);
        (*Head)->prev = *Tail;
        (*Tail)->next = *Head;
    }
}


void DeleteLast(PPNODE Head,PPNODE Tail)
{
    if(*Head==NULL && *Tail==NULL)
    {
        return ;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Tail = (*Tail)->prev;
        free((*Tail)->next);
        (*Tail)->next = *Head;
        (*Head)->prev = *Tail;
    }
}


void DeleteAtPos(PPNODE Head,PPNODE Tail,int iPos)
{
    int iCount = Count(*Head,*Tail);
    PNODE Temp = *Head;
    int iCnt = 1;

    if(iPos<1 || iPos>iCount)
    {
        printf("Error : Invalid Position\n");
        return ;
    }
    else if(iPos==1)
    {
        DeleteFirst(Head,Tail);
    }
    else if(iPos==iCount)
    {
        DeleteLast(Head,Tail);
    }
    else
    {
        while(iCnt != iPos)
        {
            Temp = Temp->next;
            iCnt++;
        }
        Temp->prev->next = Temp->next;
        Temp->next->prev = Temp->prev;
        free(Temp);
    }
}

int Count(PNODE Head,PNODE Tail)
{
    int iCnt = 0;

    if(Head==NULL && Tail==NULL)
    {
        return 0;
    }
    do
    {
        iCnt++;
        Head = Head->next;
    }while(Tail->next != Head);

    return iCnt;
}
void Display(PNODE Head,PNODE Tail)
{
    if(Head==NULL || Tail==NULL)
    {
        printf("| NULL |\n");
        return ;
    }
    do
    {
        printf("| %d |->",Head->iData);
        Head = Head->next;
    }while(Tail->next != Head);
    printf("| NULL |\n");
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    int iChoice = 0,iNo = 0,iRet = 0,iPos = 0;

    while(1)
    {
        printf("1.InsertFirst\n2.InsertLast\n3.InsertAtPos\n4.DeleteFirst\n5.DeleteLast\n6.DeleteAtPos\n7.Count\n8.Display\n9.Exit\n");
        printf("---------------------------------\n");
        printf("Enter your choice\n");
        scanf("%d",&iChoice);

        switch(iChoice)
        {
            case 1 : printf("Enter a number\n");
                     scanf("%d",&iNo);
                     InsertFirst(&First,&Last,iNo);
                     break;

            case 2 : printf("Enter a number\n");
                     scanf("%d",&iNo);
                     InsertLast(&First,&Last,iNo);
                     break;

            case 3 : printf("Enter a number\n");
                     scanf("%d",&iNo);
                     printf("Enter position\n");
                     scanf("%d",&iPos);
                     InsertAtPos(&First,&Last,iNo,iPos);
                     break;

            case 4 : DeleteFirst(&First,&Last);
                     break;

            case 5 : DeleteLast(&First,&Last);
                     break;
                     
            case 6 : printf("Enter position\n");
                     scanf("%d",&iPos);
                     DeleteAtPos(&First,&Last,iPos);
                     break;

            case 7 : iRet = Count(First,Last);
                     printf("Count of elements is : %d\n",iRet);
                     break;

            case 8 : Display(First,Last);
                     break;

            case 9 : exit(0);

            default : printf("Error : Invalid Choice.../n");
        }
    }
    return 0;
}







