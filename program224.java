import java.util.Scanner;

class ArrayX
{
    protected int Arr[];   //class cha characteristic // this is used in companies that Arr[] contains all resouces that means it needs to be private

    public ArrayX(int iSize)
    {
        System.out.println("allocating the resources");
        Arr = new int[iSize];   //Resource Allocation
    }

    protected void finalize()
    {
        System.out.println("Deallocating the resources");
        Arr = null;             //Resource Deallocation // we are requesting jvm to deallocate 
        
    }

    public void Accept()        //Getter Method
    {
         int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < this.Arr.length ; iCnt++)
        {
            this.Arr[iCnt] = sobj.nextInt();
        }
        sobj = null;
    }
    public void Display()       
    {
        int iCnt = 0;

         System.out.println("Elements of arrays are");

        for(iCnt = 0; iCnt < this.Arr.length ; iCnt++)
        {
            System.out.println(this.Arr[iCnt]);
        }
    }
}
class NNumberX extends ArrayX
{

    public NNumberX(int iSize)
    {
        super(iSize);       //yaane ArrayX kade jaato 
    }

    public int CountEven()
    {
        int iCount = 0 ,iCnt = 0;

        for(iCnt = 0;iCnt < Arr.length ;iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iCount++;
            }
        }
        return iCount;
    }
    //other logic functions

}
class program224    //most important code do practice of it 
{
    public static void main( String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements :");
        int iSize = sobj.nextInt();
        
        NNumberX nobj = new NNumberX(iSize);

        // ArrayX aobj = new ArrayX(sobj);

        nobj.Accept();
        
        nobj.Display();
       
        int iRet = 0;

        iRet = nobj.CountEven();


        System.out.println("The Even elements are :"+ iRet);

        sobj = null;

        nobj = null;        //deallocating the nobj 

        System.gc();        //requsting the jvm for finalize working
    }
        
}
