#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyCLL
{   
    private :               //Abstracted characteristrics 

        PNODE first;
        PNODE last;
        int iCount;

    public :                //public Behaviours

        DoublyCLL();

        void Display();
        int Count();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

};

DoublyCLL :: DoublyCLL()
{
    first = NULL;
    last = NULL;
    iCount = 0;

    cout<<" Inside constructor\n";
}

void DoublyCLL :: InsertFirst(int no)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(first == NULL && last == NULL)           //LL is empty
    {
       first = newn;
       last = newn;

    }
    else                                       //LL contains atleast one node
    {
        newn -> next = first;
        first -> prev = newn;

        first = newn;
    }

    last -> next = first ;
    first -> prev = last;
    iCount++;
}


void DoublyCLL :: InsertLast(int no)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(first == NULL && last == NULL)           //LL is empty
    {
       first = newn;
       last = newn;

    }
    else                                       //LL contains atleast one node
    {
       last -> next = newn;
       newn -> prev = last;

       last = newn;
    // newn -> next = first; 
    }

    last -> next = first;
    first -> prev = last;
    iCount++;
}

void DoublyCLL :: Display()
{
    PNODE temp = NULL;

    cout<<"Elements of the Linked List are : \n";

    temp = first;

    if(first == NULL && last == NULL)           //LL is empty
    {
        cout<<"LinkedList is empty";
        return;
    }
    do  
    {   
         cout<< " | " <<temp -> data <<" | <=>" ;
        temp = temp -> next;
       
    }while(temp != first);
    cout<<"\n";
}


int DoublyCLL :: Count()
{
    return iCount;
}

void DoublyCLL :: DeleteFirst()
{

    if(first == NULL && last == NULL)       //LL is empty
    {
        cout<<"Linked List is empty";
        return;
    }
    else if(first == last)                  //LL contains one node
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else                                    //LL contains more than one node
    {
        first = first -> next;
        delete first -> prev                    // delete last-> next

        last -> next =; first
        first -> prev = last;
    }
    iCount--;
}

void DoublyCLL :: DeleteLast()
{

    if(first == NULL && last == NULL)       //LL is empty
    {
        cout<<"Linked List is empty";
        return;
    }
    else if(first == last)                  //LL contains one node
    {
        delete last;
        
        first = NULL;
        last = NULL;
    }
    else                                    //LL contains more than one node
    {
        
    }
    iCount--;
}

int main()
{
    DoublyCLL dobj;
    int iRet = 0;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();

    iRet = dobj.Count();

    cout<<"Number of elements are :"<<iRet;

    dobj.DeleteLast();
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements are :"<<iRet;

    return 0;
}