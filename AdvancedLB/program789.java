import java.util.*;

class program789
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
    
        System.out.println("Enter Number :");
        int No = sobj.nextInt();

        int iCount = 0;

        while(No != 0)
        {
            iCount = iCount + (No % 2);
             No /= 2;
        }
        System.out.println("Numbers of ON bits are : "+iCount);
    }   
}//Check on bits of number