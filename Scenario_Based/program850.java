import java.util.*;

class program850
{
    public static void main(String A[])
    {
        String str = "  India   is   my  country  ";
        
        str = str.trim();

        //str = str.replaceAll("\\s+"," ");   //Important

        String Arr[] = str.split(" ");

        System.out.println(Arr.length);

    }
}