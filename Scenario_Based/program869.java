//calculate the word count

import java.util.Scanner;

class program869
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

            (finalstr.append(sb.reverse())).append(" ");
        }      
        
        String ret = new String(finalstr);

        ret = ret.trim();

        System.out.println(ret);
        System.out.println(ret.length());
    }
}