#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int value)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;
    
    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
    (*Tail)->next = *Head;
}

void InsertLast(PPNODE Head, PPNODE Tail, int value)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;
    
    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        (*Tail)->next = newn;
        *Tail = newn;
    }
    (*Tail)->next = *Head;
}

void Display(PNODE Head, PNODE Tail)
{
    if((Head == NULL) && (Tail == NULL))
    {
        return;
    }
    
    do
    {
        printf("|%d|<->",Head->data);
        Head = Head->next;
    }while(Head!= Tail->next);
}

int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;
    
    if((Head == NULL) && (Tail == NULL))
    {
        return 0;
    }
    
    do
    {
        iCnt++;
        Head = Head->next;
    }while(Head!= Tail->next);
    
    return iCnt;
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
        return;
    }
    else
    {
        *Head = (*Head)->next;
        free((*Tail)->next);
        (*Tail)->next = *Head;
    }
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    PNODE temp = *Head;
    
    if((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
        return;
    }
    else
    {
        while(temp->next != *Tail)
        {
            temp = temp->next;
        }
        
        free(*Tail);
        *Tail = temp;
        (*Tail)->next = *Head;
    }
}

void InsertAtPos(PPNODE Head , PPNODE Tail , int value , int pos)
{
    int count = 0, i= 0;
    PNODE temp = *Head;
    PNODE newn = NULL;
    
    count = Count(*Head, *Tail);
    
    if((pos < 1) || (pos > (count + 1)))
    {
        return;
    }
    if(pos == 1)
    {
        InsertFirst(Head, Tail, value);
    }
    else if(pos == count + 1)
    {
        InsertLast(Head,Tail,value);
    }
    else
    {
        newn= (PNODE)malloc(sizeof(NODE));
        newn->next = NULL;
        newn->data = value;
        
        for(i = 1; i< pos-1; i++)
        {
            temp = temp->next;
        }
        
        newn->next = temp->next;
        temp->next = newn;
        
    }
}

void DeleteAtPos(PPNODE Head,PPNODE Tail, int pos)
{
    int cnt = 0,i = 0;
    PNODE temp = *Head;
    PNODE temp2 = NULL;
    
    cnt = Count(*Head, *Tail);
    
    if((pos < 1) || (pos > cnt))
    {
        return;
    }
    if(pos == 1)
    {
        DeleteFirst(Head, Tail);
    }
    else if(pos == cnt)
    {
        DeleteLast(Head, Tail);
    }
    else
    {
        for(i = 1; i<pos-1; i++)
        {
            temp =temp->next;
        }
        temp2 = temp->next;
        temp->next = temp2->next;
        free(temp2);
    }
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    int ch=0 , n=0 , pos=0 , iCnt=0 , iNo = 0;
    int i = 0,num;
    do
	{
		printf("\nMENU\n1.InsertFirst\n2.InsertLast\n3.DeleteFirst\n4.DeleteLast\n5.InsertAtPos\n6.DeleteAtPos\n7.Display\n8.Count\n9.Exit\n");
		printf("Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
                    printf("Enter the count :\t");
                    scanf("%d",&n);
                    for(i = 1 ; i <=n; i++)
                    {
                        printf("Enter the element :\t");
                        scanf("%d",&iNo);
                        InsertFirst(&First,&Last,iNo);
                    }
                    break;
			break;

			case 2:
                    printf("Enter the count :\t");
                    scanf("%d",&n);
                    for(i = 1 ; i <=n; i++)
                    {
                        printf("Enter the element :\t");
                        scanf("%d",&iNo);
                        InsertLast(&First,&Last,iNo);
                    }
			        break;

			case 3:
                    DeleteFirst(&First,&Last);
                    break;
		
			case 4:
                    DeleteLast(&First,&Last);
                    break;
			
            case 5:
                    printf("Enter the pos :\t");
                    scanf("%d",&num);
                    printf("Enter the element :\t");
                    scanf("%d",&iNo);
                    InsertAtPos(&First,&Last,iNo,num);
                    break;

            case 6:
                    printf("Enter the pos :\t");
                    scanf("%d",&iNo);
                    DeleteAtPos(&First,&Last,iNo);
                    break;

			case 7:
			        Display(First,Last);
			        break;

            case 8:
                    iCnt = Count(First,Last);
                    printf("Number of elements in list : %d \n",iCnt);
                    break;
			}
	}while(ch!=9);
}
