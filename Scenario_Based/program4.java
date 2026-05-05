import java.util.*;

class program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Units = 0;

        int Amount = 0;

        System.out.println("Enter the Units");

        Units = sobj.nextInt();

        if(Units < 0)
        {
            System.out.println("Unit Can't be negative");
            return;
        }

        if(Units <= 100)
        {   
            Amount = Units * 5;
        }
        else if(Units <= 200)
        {
            Amount = 500 +((Units - 100) * 7);
        }
        else if(Units >= 200)
        {
            Amount = 500 + 700 + ((Units - 200)*10);
        }

        System.out.println("Total Units Consumed : "+Units);
        System.out.println("Total Electricity Bill : "+"Rs."+Amount);

        sobj.close();
    }
}