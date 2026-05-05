import java.util.*;

class program791
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
    
        System.out.println("Enter Number :");
        int No = sobj.nextInt();

        int iCount = 0;
        
        //Brian Kernighan algorithm
        while(No != 0)
        {
            No = No & (No -1);
            iCount++;
        }
      
        System.out.println("Numbers of ON bits are : "+iCount);
    }   
}//Check on bits of number this is BK algorithm