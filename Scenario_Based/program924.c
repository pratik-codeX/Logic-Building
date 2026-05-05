#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node   
{
    int data;           
    struct node *next;     
}NODE,* PNODE,**PPNODE;

void InsertLast(PPNODE first , int no)     
{
     PNODE newn = NULL; 
     PNODE temp = NULL ;                 

    newn = (PNODE)malloc(sizeof(NODE)); 

    newn->data = no;                        
    newn->next = NULL;                      

    if(*first == NULL)                         
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
            temp -> next = newn;
    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
    printf("NULL\n");
}


//Time Complexity : 3N
//Space Complexity : N
void Reverse(PPNODE first)
{
    int *Arr = NULL;
    int iCount = 0, i = 0;

    PNODE temp = *first;
    
    while(temp != NULL) //O(N)
    {
        temp = temp -> next;
        iCount++;
    }

    //Space Complexity : N
    Arr = (int *)malloc(sizeof(int) * iCount);

    temp = *first;

    while(temp != NULL) // O(N)
    {
        Arr[i] = temp->data;
        i++;
        temp = temp->next;
    }

    temp = *first;

    iCount--;
    while (temp != NULL)    // O(N)
    {
        temp->data = Arr[iCount];
        iCount--;
        temp = temp->next;
    }
    
    free(Arr);//Array Deallocation
}

int main()
{
    PNODE head = NULL;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);

    Display(head);

    Reverse(&head);

    printf("LinkedList after Reversed :\n");

    Display(head);

    return 0;
}//Convert this code into C++,Java