import java.util.*;

class program849
{
    public static void main(String A[])
    {
        String str = "  India   is   my  country  ";
        
        str = str.trim();

        str = str.replaceAll("\\s+"," ");   //regular expression

        String Arr[] = str.split(" ");

        System.out.println(Arr.length);

    }
}