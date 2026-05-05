import java.util.*;

class program848
{
    public static void main(String A[])
    {
        String str = "  India   is   my  country  ";

        System.out.println(str);
        str = str.trim();

        str = str.replaceAll("\\s+"," ");   //regular expression 

        System.out.println(str);

    }
}