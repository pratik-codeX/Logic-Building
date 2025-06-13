import java.util.Scanner;
class Number 
{
    public void DisplayFactors(int iNo)
    {
        int iCnt =0;

        for(iCnt=1;iCnt<=(iNo/2)==0;iCnt++)
        {
            if((iNo% iCnt)==0)
            {
                System.out.prinfln(iCnt);
            }
        }
    }
}
class program59
{
    public static void main(String A[])
    {
       
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        Number nobj = new Number();

        nobj.DisplayFactors(iValue);

        System.out.println("the factors are :" + iValue);
       


    }
}