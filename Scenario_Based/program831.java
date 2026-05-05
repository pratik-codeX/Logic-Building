import java.util.*;

class program831
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0, iDigit = 0, iTemp = 0, iSum = 0;

        System.out.println("Enter Number :");

        iNo = sobj.nextInt();

        iTemp = iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iSum = iSum + iDigit;

            iNo = iNo / 10;
        }

        if(iSum == iTemp)
        {
            System.out.println(iTemp + " is neon number");
        }
        else
        {
            System.out.println(iTemp + " is not neon number");       
        }

    }
}

/**
 *  iNo = 153
 *  iRet = iRev * 10 + iDigit
 * 
 */