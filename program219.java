import java.util.Scanner;

class NNumberX      
{
    public int Arr[];

    public NNumberX(int iSize)
    {
        Arr = new int[iSize];   //Resource Allocation
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
}

class program219
{
    public static void main( String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements :");
        int iSize = sobj.nextInt();
        
        NNumberX nobj = new NNumberX(iSize);

        nobj.Accept();
        
        nobj.Display();
       
        int iRet = 0;

        iRet = nobj.CountEven();


        System.out.println("The Even elements are :"+ iRet);

        sobj = null;
    }
        
}
