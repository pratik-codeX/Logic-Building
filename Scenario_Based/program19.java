import java.util.*;

class program19
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iDigit = 0;


        System.out.println("Enter the Number : ");
        iNo = sobj.nextInt();

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);

            iNo = iNo / 10;
        }

        sobj.close();
    }
}