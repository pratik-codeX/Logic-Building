import java.util.Scanner;

class program216
{
    public static void main( String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements :");
        int iSize = sobj.nextInt();
        
        int Arr[] = new int [iSize];

        int iCnt = 0;

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < Arr.length ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements of arrays are");

        for(iCnt = 0; iCnt < Arr.length ; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
        
        int iCount = 0;

        for(iCnt = 0;iCnt < Arr.length ;iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iCount++;
            }
        }
        System.out.println("The Even elements are :"+ iCount);
        Arr = null;
        sobj = null;
    }
        
}
