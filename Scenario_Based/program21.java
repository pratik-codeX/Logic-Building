/**
 * input : 5
 * algo : 5 * 4 * 3 * 2 * 1
 * output : 120
 */

import java.util.*;

class program21
{
    public static void main(String A[])
    {
         int iNo = 0,iFact = 0,i = 0,iTemp = 0,iSum = 0, iDigit = 0;
        Scanner sobj = new Scanner(System.in);
        iNo = sobj.nextInt();

       
        while(iNo != iTemp)
        {
            iDigit = iNo % 10;
        
            
            for(i = 1, iFact = 1; i <= iDigit; i++)
            {
                iFact = i * iFact;
            }

            iSum = iSum + iFact;
        }

        if(iSum == iTemp)
        {
            System.out.println("Its a Strong Number");
        }
        else
        {
            System.out.println("Its a NotStrong Number");
        }

        sobj.close();
    }
}