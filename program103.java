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
       
        for(i = 1; i<=iRow;i++)
        {
            for(j= 1; j<=iCol; j++)
            {
                 if((i==1) || (i==iRow))
                 {
                    System.out.print("*\t");
                 }  
                 else
                 {
                    System.out.print("0\t");
                 }
            }
                System.out.println("\n");
        }
    }
} 
class program103
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