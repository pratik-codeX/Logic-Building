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
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = *last = newn;
        newn->next = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
        (*last)->next = *first;
    }
}

void InsertLast(PPNODE first , PPNODE last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = *last = newn;
        newn->next = newn;
    }
    else
    {
        (*last)->next = newn;
        *last = newn;
        (*last)->next = *first;
    }
}

void DeleteFirst(PPNODE first, PPNODE last)
{
    if (*first == NULL)
        return;

    if (*first == *last) 
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        PNODE temp = *first;
        *first = (*first)->next;
        (*last)->next = *first;
        free(temp);
    }
}

void DeleteLast(PPNODE first , PPNODE last)
{
    if (*first == NULL)
        return;

    if (*first == *last) 
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        PNODE temp = *first;
        while (temp->next != *last)
        {
            temp = temp->next;
        }

        free(*last);
        *last = temp;
        (*last)->next = *first;
    }
}

void DeleteAtPos(PPNODE first , PPNODE last , int pos)
{
    int i = 0, count = 0;
    PNODE temp = *first;

    if (*first == NULL)
        return;

    do {
        count++;
        temp = temp->next;
    } while (temp != *first);

    if (pos < 1 || pos > count)
    {
        printf("Invalid position\n");
        return;
    }

    if (pos == 1)
    {
        DeleteFirst(first, last);
    }
    else if (pos == count)
    {
        DeleteLast(first, last);
    }
    else
    {
        PNODE temp = *first;
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        PNODE target = temp->next;
        temp->next = target->next;
        free(target);
    }
}

void Display(PNODE first , PNODE last)
{
    if(first == NULL)
    {
        printf("List is empty\n");
        return;
    }

    do
    {
        printf("| %d | -> ", first->data);
        first = first->next;
    } while(first != last->next);
    printf("NULL\n");
}

int Count(PNODE first , PNODE last)
{
    int iCount = 0;

    if (first == NULL)
        return 0;

    do
    {
        iCount++;
        first = first->next;
    } while(first != last->next);
    
    return iCount;
}

void InsertAtPos(PPNODE first ,PPNODE last,int no , int pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int i = 0, iCount = 0;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if (*first == NULL && *last == NULL)
    {
        if (pos != 1)
        {
            printf("Invalid Position\n");
            free(newn);
            return;
        }

        *first = *last = newn;
        newn->next = newn;
        return;
    }

    temp = *first;
    do {
        iCount++;
        temp = temp->next;
    } while(temp != *first);

    if(pos < 1 || pos > iCount+1)
    {
        printf("Invalid Position\n");
        free(newn);
        return;
    }

    if(pos == 1)
    {
        InsertFirst(first, last, no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(first, last, no);
    }
    else
    {
        temp = *first;
        for(i = 1; i < pos -1; i++)
        {
            temp = temp -> next;
        }
        newn->next = temp->next;
        temp->next = newn;
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
    printf("The number of elements after DeleteFirst: %d\n", iRet);

    DeleteLast(&head,&tail);
    Display(head,tail);
    iRet = Count(head,tail);
    printf("The number of elements after DeleteLast: %d\n", iRet);

    InsertAtPos(&head,&tail,55,5);
    Display(head,tail);
    iRet = Count(head,tail);
    printf("The number of elements after InsertAtPos: %d\n", iRet);

    DeleteAtPos(&head,&tail,3);
    Display(head,tail);
    iRet = Count(head,tail);
    printf("The number of elements after DeleteAtPos: %d\n", iRet);

    return 0;
}
