import java.util.*;

class program794
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
    
        System.out.println("Enter Number :");
        int No = sobj.nextInt();

        int iCount = 0;
        
        if( No & (No -1) == 0)
        {
            System.out.println("Number is Power of 2");
        }
        else
        {
            System.out.println("Number is Not Power of 2");

        }
    }   
}//check number is power of 2 or not