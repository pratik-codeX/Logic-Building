#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;      //$
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;


void Display(PNODE first)
{
    printf("NULL <=>");

    while(first != NULL)
    {
        printf("| %d | <=>",first->data);
        first = first -> next;
    }
    printf("NULL \n");
}

int Count(PNODE first)
{
    int iCount = 0;
     while(first != NULL)
    {
        iCount++;
        first = first -> next;
    }

    return iCount;
}

void InsertFirst(PPNODE first , int no)
{

    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next = NULL;
    newn-> prev = NULL;         //$

    if(*first == NULL)          //if LL is empty
    {
        *first = newn;       
    }
      else                        
    {
        newn->next = *first;
        (*first)->prev = newn;          //$
        *first = newn;
    }

}

void InsertLast(PPNODE first , int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next = NULL;
    newn-> prev = NULL;         //$

    if(*first == NULL)          //if LL is empty
    {
        *first = newn;       
    }
    else
    {
        temp = *first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        newn->prev = temp;          //$
        temp->next = newn;
    }
  
}

void DeleteFirst(PPNODE first)          
{

    if(*first == NULL)
    {
        return;
    }
    else if((*first) -> next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        *first = (*first)->next;
        free((*first) -> prev);       //$
        (*first)->prev = NULL;      //$

    }

}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;
    
     if(*first == NULL)
    {
        return;
    }
    else if((*first) -> next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {   temp = *first;
        while(temp-> next->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;            //$
        free(temp);

    }
}

void DeleteAtPos(PPNODE first , int pos)
{
    int iCount = 0;
    int iCnt = 0;

    PNODE temp = NULL;
    PNODE target = NULL;
    
    iCount = Count(*first);

    if((pos < 1) || (pos > iCount))        //filter
    {
        printf("Invalid Position \n");
        return;
    }
    
    if(pos == 1)
    {   
        DeleteFirst(first);
    }
    else if(pos == iCount)
    {
        DeleteLast(first);
    }
    else
    {
        temp = *first;

        for(iCnt = 1;iCnt < pos - 1;iCnt++)
        {
            temp = temp -> next;
        }

        temp->next = target -> next;
        target-> next -> prev = temp ;
        free(target);
    }
}

void InsertAtPos(PPNODE first , int no , int pos)
{
    int iCount = 0;
    int iCnt = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;

    iCount = Count(*first);

    if((pos < 1) || (pos > iCount + 1 ))        //filter
    {
        printf("Invalid Position \n");
        return;
    }
    
    if(pos == 1)
    {   
        InsertFirst(first , no);
    }
    else if(pos == iCount + 1)
    {
        InsertLast(first,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *first;

        for(iCnt = 1;iCnt < pos - 1;iCnt++)
        {
            temp = temp -> next;
        }

        newn->next = temp -> next ;
        newn ->next -> prev = newn;
        temp -> next = newn;
        newn -> prev = temp;

    }
}

int main()
{
   PNODE head = NULL;

   int iChoice = 0;
   int iValue = 0;
   int iPos = 0;
   int iRet = 0;

    printf("-----------------------------------------------------------------------\n");
    printf("-------------------------Doubly Linear Linked List---------------------\n");
    printf("---------------------------------------------------------------------\n\n");

   while(1)
   {
        printf("-----------------------------------------------------------------------\n");
        printf("---------------------Please Select the Option--------------------------\n");
         printf("----------------------------------------------------------------------\n");
        printf("1 : Insert new node at first position\n");
        printf("2 : Insert new node at last position\n");
        printf("3 : Insert new node at given position\n");
        printf("4 : delete the node at first position\n");
        printf("5 : Delete the node at last position\n");
        printf("6 : Delete new node at given position\n");
        printf("7 : Display all element at LinkedList\n");
        printf("8 : Count Number of element in LinkedList\n");
        printf("0 : Terminate the application\n");
        printf("-----------------------------------------------------------------------\n");

        scanf("%d",&iChoice);

        if(iChoice == 1)
        {
            printf("Enter the data that you want to Insert");
            scanf("%d",&iValue);

            InsertFirst(&head,iValue);
        }
        else if(iChoice == 2)
        {
            printf("Enter the data that you want to Insert");
            scanf("%d",&iValue);

            InsertLast(&head,iValue);
        }
        else if(iChoice == 3)
        {
            printf("Enter the data that you want to Insert");
            scanf("%d",&iValue);

             printf("Enter the position that you want to Insert new node");
            scanf("%d",&iPos);


            InsertAtPos(&head,iValue,iPos);
        }
        
        else if(iChoice == 4)
        {
            printf("Deleting the first element form LinkedList");

            DeleteFirst(&head);
        }
         else if(iChoice == 5)
        {
            printf("Deleting the last element form LinkedList");

            DeleteLast(&head);
        }
        else if(iChoice == 6)
        {
             printf("Enter the position form which you want to delete node");
            scanf("%d",&iPos);


            DeleteAtPos(&head,iPos);
        }
        else if(iChoice == 7)
        {
         printf("Elements of Linked List are : ");
         Display(head);
        }
         else if(iChoice == 8)
        {
            iRet = Count(head);
         printf("Elements of Linked List are : %d",iRet);
        }
         else if(iChoice == 0)
        {
         printf("Thank you for wasting your Time \n");
            break;
        }
        else
        {
            printf("Invalid Choice ");
        }
    }
    return 0;
}