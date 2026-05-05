/**
 * input : 5
 * algo : 5 * 4 * 3 * 2 * 1
 * output : 120
 */

import java.util.*;

class program819
{
    public static boolean CheckStrong(int iNo)
    {
        int iTemp = 0,iSum = 0, iDigit = 0;
        iTemp = iNo;

        //              0, 1, 2, 3, 4,   5,   6,   7,    8,     9 
        int FactArr[] = {1,1,2,6,24,120,720,5040,40320,362880};

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iSum = iSum + FactArr[iDigit];

            iNo = iNo/10;
        }

        return (iTemp == iSum);
        
    }

    public static void main(String A[])
    {
        int iNo = 0;
        boolean bRet = false;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number :");
        iNo = sobj.nextInt();

        bRet = CheckStrong(iNo);

        if(bRet)
        { 
            System.out.println(iNo + " is Strong Number");
        }
        else
        {
            System.out.println(iNo +" is Not Strong Number");
        }
        sobj.close();
    }
}//better optimized than previous 
//time complexity : N;