/**
 * input : 5
 * algo : 5 * 4 * 3 * 2 * 1
 * output : 120
 */

import java.util.*;

class program20
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iFact = 0;
        int i = 0;



        System.out.println("Enter the Number : ");
        iNo = sobj.nextInt();

        iFact = 1;
        for(i = 1; i <= iNo; i++)
        {
            iFact = i * iFact;
        }
        System.out.println("Factorial is :"+iFact);

        sobj.close();
    }
}