//Triomorphic Number

import java.util.*;
class program837
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0, iTemp = 0, iCube = 0, iCount = 0, iDeno = 0;

        System.out.println("Enter Number :");
        iNo = sobj.nextInt();

        iCube = iNo * iNo * iNo;

        iTemp = iNo;

        while(iNo != 0)
        {
            iCount++;
            iNo = iNo / 10;
        }

        iDeno = (int)Math.pow(10,iCount);

        if(iCube % iDeno == iTemp)
        {
            System.out.println(iTemp + " is Triomorphic number");
        }
        else
        {
            System.out.println(iTemp + " is Not Triomorphic number"); 
        }
    }
}