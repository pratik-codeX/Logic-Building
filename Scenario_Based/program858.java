//Accept str and display largest words length

import java.util.Scanner;

class program858
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

        for (int i = 0,iCount = Arr[i].length(); i < Arr.length; i++) 
        {
            if(iCount < Arr[i].length())
            {
                iCount = Arr[i].length();
                
                System.out.println(Arr[i] + ": " + Arr[i].length());
            }
        }
    }
}