import java.util.*;

// Input : i love programming in python
//output : i in love python programming

class program799
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string :");

        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        System.out.println(str);
    }
}//check pair of numbers satisfied with output