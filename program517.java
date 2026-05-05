import java.util.*;

class program517
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);  
        System.out.println("Enter String : ");

        String str = sobj.nextLine();

        str = str.trim();
  
        str =  str.replaceAll("\\s+"," ");      //regular expression

        System.out.println(str);
    }
}