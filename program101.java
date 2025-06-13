// input 4  4
/*
A   B   C   D
A   B   C   D
A   B   C   D
A   B   C   D
*/
import java.util.Scanner;

class Pattern 
{
    public void Display(int iRow, int iCol)
    {
        int i = 0 , j = 0;
        char ch1 = '\0',ch2 = '\0';

        for(i = 1 ,ch1='a',ch2='A'; i <= iRow ;ch1++,ch2++)
        {
            for(j= 1; j<=iCol; j++)
            {
                if(i % 2==0)
                {
                 System.out.print(ch2+"\t");
                }
                else
                {
                System.out.println(ch1+"\t");
                }
            }
                System.out.println();
    }
    }
} 
class program101
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 , iValue2 = 0;

        System.out.println("Enter number of row :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of column :");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1,iValue2);

    }
}