import java.util.*;

class program787
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
    
        System.out.println("Enter First Number :");
        int No1 = sobj.nextInt();

        System.out.println("Enter Second Number :");
        int No2 = sobj.nextInt();

        No1 = No1 ^ No2;
        No2 = No2 ^ No1;
        No1 = No1 ^ No2;

        System.out.println("No1 after Swapping : "+ No1);
        System.out.println("No2 after Swapping : "+ No2);

    }   
}//swap content of two number without temp dry run this