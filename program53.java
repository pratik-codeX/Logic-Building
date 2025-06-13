import java.util.Scanner;

class program53
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter first number :");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter Second number :");
        int iNo2 = sobj.nextInt();

        int iAns = iNo1 + iNo2;

        System.out.println("The Additon of numbers is :" +iAns );
    }
}