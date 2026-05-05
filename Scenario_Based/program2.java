import java.util.*;

class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter your current balance");
        int Current_Balance = sobj.nextInt();

        System.out.println("Please Enter your Amount that you want to withdraw");

        int Withdraw_Amount = sobj.nextInt();

        if(Current_Balance < 0 || Withdraw_Amount <= 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        if(Withdraw_Amount % 100 != 0)
        {
            System.out.println("Transcation Failed : Withdrawl amount must be multiple of Rs.100");
        }
        else if(Withdraw_Amount > 25000)
        {
            System.out.println("Transcation Failed : Maximum withdrawal per transaction is Rs.25000");
        }
        else if(Current_Balance - Withdraw_Amount < 1000)
        {
            System.out.println("Transcation Failed : After Withdrawal balance must remain atleast 1000");
        }
        else
        {
            System.out.println("Transcation Succesfull.");
            System.out.println("Remaining Balance : "+ (Current_Balance - Withdraw_Amount));
        }
          sobj.close();
    }
}