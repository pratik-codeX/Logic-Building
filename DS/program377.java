class node
{
   public int data;
   public node next;
}

class DoublyCLL
{
    private node first;
    private node last;
    private int iCount;

   public DoublyCLL()
    {
        first = null;
        last = null;
        iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = null;
        newn.data = no;
        newn.next = null;

        newn = new node();

        if(first == null  || last == null)
        {
            first = newn;
            last = newn;

            newn.next = first;
        }
    }

       public void InsertLast(int no)
    {

    }

       public void InsertAtPos(int pos ,int no)
    {

    }

       public void DeleteFirst()
    {

    }

     public void DeleteLast()
    {

    }

    public void DeleteAtPos(int pos)
    {

    }

    public void Display()
    {

    }

    public int Count()
    {
        return 0;
    }
}

public class program377 
{
    public static void main(String A[])
    {
        DoublyCLL sobj = null;

        sobj = new DoublyCLL();
    }
    
}

//saglya linked list ekatra karychya ahet