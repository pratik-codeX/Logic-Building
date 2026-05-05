//Accept str and display largest words length

import java.util.Scanner;

class program859
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter String : ");

        // Step 0
        str = sobj.nextLine();

        // Step 1
        str = str.trim();

        // Step 2
        str = str.replaceAll("\\s+", " ");

        // Step 3
        String Arr[] = str.split(" ");

        int iMax = 0;

        for (int i = 0; i < Arr.length; i++) 
        {
            if(iMax < Arr[i].length())
            {
                iMax = Arr[i].length();
            }
        }
        System.out.println("Longest word length : " + iMax);
    }
}