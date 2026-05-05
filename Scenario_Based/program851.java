import java.util.*;

class program851
{
    public static void main(String A[])
    {
        String str = "  India   is   my  country  ";
        
        str = str.trim();

        str = str.replaceAll("\\s+"," ");   //Important

        String Arr[] = str.split(" ");

        System.out.println(Arr.length);

        for(int i = 0;i< Arr.length;i++)
        {
            System.out.print(Arr[i]);
        }

    }
}