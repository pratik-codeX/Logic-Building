//calculate the word count

import java.util.Scanner;

class program867
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

        StringBuffer finalstr = new StringBuffer();

        for (int i = 0; i < Arr.length; i++) 
        {  
            sb = new StringBuffer(Arr[i]);

            sb.reverse();

            finalstr.append(sb);
            finalstr.append(" ");
        }      
        
        System.out.println(finalstr);
    }
}