class node
{
    public int data ;
    public node next;
}

class SinglyLL
{
    private node first;
    private int iCount;

    public SinglyLL()
    {
        System.out.println("Inside Constructor");
        first = null;
        iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = null;               //PNODE replaces with node

        newn = new node();

        newn.data = no;
        newn.next = null;

        if(first == null)              //LL is empty
        {
            first = newn;
        }
        else                            //LL contains atleast one node
        {
            
        }
    }

     public void InsertLast(int no)
    {
        node newn = null;               //PNODE replaces with node

        newn = new node();

        newn.data = no;                 //tshirt mage no lihila
        newn.next = null;               //haat khishat ghatla

        if(first == null)              //LL is empty
        {
            first = newn;
        }
        else                            //LL contains atleast one node
        {

        }
    }
}
class program373
{
    public static void main(String A[])
    {// SinglyLL sobj;          //reference of class

        SinglyLL sobj = new SinglyLL();
    }
}