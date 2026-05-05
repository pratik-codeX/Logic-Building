//calculate the word count

import java.util.Scanner;

class program866
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

        StringBuffer sb = null;

        for (int i = 0; i < Arr.length; i++) 
        {  
            sb = new StringBuffer(Arr[i]);

            sb.reverse();

            System.out.print(sb + " ");
        }      
        
        System.out.println();
    }
}