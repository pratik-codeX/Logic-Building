import java.util.*;

class program790
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
    
        System.out.println("Enter Number :");
        int No = sobj.nextInt();

        int iCount = 0 , i = 0;
        int iMask = 0x0000001;

        for(i = 0;i < 32; i++)
        {
            if((No & iMask) == iMask)
            {
                iCount++;
            }
            iMask <<= 1;
        }
        System.out.println("Numbers of ON bits are : "+iCount);
    }   
}//Check on bits of number