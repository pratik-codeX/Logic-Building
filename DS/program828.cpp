#include<iostream>
using namespace std;

template<class T>
struct DoublyCLLnode
{
    T data;
    struct DoublyCLLnode<T> *next;
    struct DoublyCLLnode<T> *prev;
};

template<class T>
class DoublyCLL
{   
    private :               
        struct DoublyCLLnode<T> * first;
        struct DoublyCLLnode<T> * last;
        int iCount;

    public :               
        DoublyCLL();
        void Display();
        int Count();
        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T,int);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

};

template<class T>
DoublyCLL<T> :: DoublyCLL()
{
    first = NULL;
    last = NULL;
    iCount = 0;

    cout<<" Inside constructor\n";
}

template<class T>
void DoublyCLL<T> :: InsertFirst(T no)           //return Classname ::(scope resolution) functionname
{
    struct DoublyCLLnode<T>* newn = NULL;

    newn = new struct DoublyCLLnode<T>;

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

template<class T>
void DoublyCLL<T> :: InsertLast(T no)
{
    struct DoublyCLLnode<T> * newn = NULL;

    newn = new struct DoublyCLLnode<T> ;

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

template<class T>
void DoublyCLL<T> :: Display()
{
    struct DoublyCLLnode<T> * temp = NULL;

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

template<class T>
int DoublyCLL<T> :: Count()
{
    return iCount;
}

template<class T>
void DoublyCLL<T> :: DeleteFirst()
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
        delete first -> prev ;                 // delete last-> next

        last -> next = first;
        first -> prev = last;
    }
    iCount--;
}

template<class T>
void DoublyCLL<T> :: DeleteLast()
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
        last = last -> prev;
        delete last -> next;
        
        last -> next = first;
        first -> prev = last;
    }
    iCount--;
}

template<class T>
void DoublyCLL<T> :: InsertAtPos(T no,int pos)
{
    struct DoublyCLLnode<T> * temp = NULL;
    int iCnt = 0;
    struct DoublyCLLnode<T> * newn = NULL;

    if(pos < 1 || pos > iCount+1 )
    {
        cout<<"Invalid Position \n";
        return;
    }
    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(no);
    }   
    else
    {
        newn = new struct DoublyCLLnode<T>;

        newn -> data = no;
        newn -> next = NULL;
        newn -> prev = NULL;

        temp = first;

        for(iCnt = 1;iCnt < pos -1;iCnt++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next -> prev = newn;

        temp -> next = newn;
        newn -> prev = temp;

        iCount++;
    }
}

template<class T>
void DoublyCLL<T> :: DeleteAtPos(int pos)
{
    struct DoublyCLLnode<T> * temp = NULL;
    int iCnt = 0;

    if(pos < 1 || pos > iCount )
    {
        cout<<"Invalid Position \n";
        return;
    }
    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iCount+1)
    {
        DeleteLast();
    }   
    else
    {

        temp = first;

        for(iCnt = 1;iCnt < pos -1;iCnt++)
        {
            temp = temp -> next;
        }

        temp -> next = temp -> next -> next;
        delete temp -> next -> prev;
        temp -> next -> prev = temp;

        iCount--;
    }
}
int main()
{


    return 0;
}