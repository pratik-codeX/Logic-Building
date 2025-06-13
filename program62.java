import java.util.Scanner;
class Number 
{
    public void DisplayNonFactors(int iNo)
    {
        int iCnt =0;
        int iSum = 0;

        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            if((iNo % iCnt) != 0)
            {

            iSum = iSum+iCnt;
            
            }
        }
        return iSum;
    }
}
class program62
{
    public static void main(String A[])
    {
        int iRet =false;
       
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        Number nobj = new Number();

        int iRet = nobj.DisplayNonFactors(iValue);

        System.out.println("the factors are :" + iRet);

    }
}