import java.util.*;

//input : 18 
// output : harshad number
// sum digit = 18 = 1 + 8 , 18 % 9 = 0

class program827
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0, iDigit = 0, iSum = 0,iTemp = 0;

        System.out.println("Enter Number :");

         iNo = sobj.nextInt();

        iTemp = iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iSum = iDigit + iSum;

            iNo = iNo / 10;
        }

        if(iTemp % iSum == 0)
        {
            System.out.println(iTemp +"It is Niven Number");
        }
        else
        {
            System.out.println("It is no Niven number");
        }
        sobj.close();
    }
}