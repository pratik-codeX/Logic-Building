/**
 * input : 5
 * algo : 5 * 4 * 3 * 2 * 1
 * output : 120
 */

import java.util.*;

class program817
{
    public static boolean CheckStrong(int iNo)
    {
        int iFact = 0,i = 0,iTemp = 0,iSum = 0, iDigit = 0;
        iTemp = iNo;

        while(iNo != iTemp)
        {
            iDigit = iNo % 10;
        
            for(i = 1, iFact = 1; i <= iDigit; i++)
            {
                iFact = i * iFact;
            }

            iSum = iSum + iFact;

            iNo = iNo/10;
        }
        

        return (iSum == iTemp);
    }
    public static void main(String A[])
    {
        int iNo = 0;
        boolean bRet = false;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number :");
        iNo = sobj.nextInt();

        bRet = CheckStrong(iNo);

        if(bRet == true)
        { 
            System.out.println(iNo + " is Strong Number");
        }
        else
        {
            System.out.println(iNo +" is Not Strong Number");
        }
        sobj.close();
    }
}//competetive