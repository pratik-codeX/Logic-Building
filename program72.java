import java.util.*;

class Digits
{
    public int CountEven(int iNo)
    {
    int iDigit = 0;


       if(iNo <0)
       {
            iNo = -iNo;
       }

        while(iNo > 0)
        {
            iDigit = iNo %10;
             if(((iNo %10) % 2)==0)
             {
                iCnt++;
             }
            iNo= iNo /10;
        
    }
        return 
    }
}
class program70
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits();

        iRet = dobj.CountEven(iValue);

        System.out.println("Number of digits are :" + iRet);
    }
}