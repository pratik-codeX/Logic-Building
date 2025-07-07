//singly circular
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first , PPNODE last, int no)
{
    PNODE newn = NULL;

    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;

        (*last) -> next = *first;
    }
    else
    {
        newn-> next = *first;
        *first = newn;

        (*last)-> next = *first;
    }  
}

void InsertLast(PPNODE first , PPNODE last, int no)
{
      PNODE newn = NULL;

    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;

        (*last) -> next = *first;
    }
    else
    {
       (*last) -> next = newn; 
       *last = newn;

       (*last) -> next = *first;
    }
}     

void DeleteFirst(PPNODE first, PPNODE last)
{
    PNODE temp = NULL;
    temp = *first;

    *first = temp -> next;
    (*last) -> next = temp;
    free (temp);
}
void DeleteLast(PPNODE first , PPNODE last)
{
   PNODE temp = NULL;
   
   temp = *first;

  while(temp->next != (*last))
  {
    temp = temp -> next;
  }

    temp -> next = (*first);
   free(*last);
   (*last) -> next = *first;
}

void DeleteAtPos(PPNODE first , PPNODE last , int pos)
{
    PNODE temp = NULL;

    temp = *first;

    if(pos == 1)
    {
        *first = temp -> next;

        (*last) -> next = temp;

        free(temp);
    }
}

void Display(PNODE first , PNODE last)
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    do
    {
    printf("| %d | ->",first -> data);
    first = first -> next;
    }while(first != last -> next);
    printf("NULL\n");

}
int Count(PNODE first , PNODE last)
{
    int iCount = 0;
    do
    {
        iCount++;
        first = first -> next;
    }while(first != last -> next);
    
    return iCount;
}

void InsertAtPos(PPNODE first ,PPNODE last,int no , int pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    
    int i = 0;
    int iCount = 0;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

     if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;
        newn -> next = newn;
        return;
    }

    temp = *first;
   
    do {
        iCount++;
        temp = temp->next;
    } while(temp != *first); 

    if(pos < 1 || pos > iCount+1)
    {
        printf("Invalid Position");
        free(newn);
        return;
    }

    if(pos == 1)
    {
         InsertFirst(first, last, no);

    //    newn -> next = *first;
    //    *first = newn;

    //    (*last) -> next = *first;
    //    return;
    }       
    
    else if(pos == iCount+1)
    {
        InsertLast(first, last, no);
        // (*last) -> next = newn;
        // *last = newn;
        // newn -> next = *first;
        // return;
    }
    else
    {
        temp = *first;

        for(i = 1;i < pos -1;i++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next = newn;
    }  
}
int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;
    int iRet = 0;

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);

    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,121);
    InsertLast(&head,&tail,151);

    Display(head,tail);

    DeleteFirst(&head,&tail);
    Display(head,tail);
    iRet = Count(head,tail);
    printf(" The Number of elements in ll after first delete are %d\n",iRet);

    DeleteLast(&head,&tail);
    Display(head,tail);
    iRet = Count(head,tail);
    printf(" The Number of elements in ll are %d\n after delete last\n\n",iRet);


    InsertAtPos(&head,&tail,55,5);
    Display(head,tail);
    iRet = Count(head,tail);
    printf(" The Number of elements in ll are %d\n",iRet);
    
    return 0;
}   