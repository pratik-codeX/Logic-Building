//Accept str and display largest words length

import java.util.Scanner;

class program861
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

        int MaxIndex = 0;

        for (int i = 0; i < Arr.length; i++) 
        {
            if(iMax < Arr[i].length())
            {
                iMax = Arr[i].length();
                MaxIndex = i;
            }
        }
        System.out.println("Longest word length : " + iMax);
        System.out.println("Longest word is : " + Arr[MaxIndex]);
    }
}