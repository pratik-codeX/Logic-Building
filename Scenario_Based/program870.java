//input : india is my country i live in INDIA
//Output : Bharat is my country i live in Bharat

import java.util.*;

class program870
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

        StringBuffer Finalstr = new StringBuffer();

        for (int i = 0; i < Arr.length; i++) 
        {  
            if(Arr[i].equalsIgnoreCase("india"))
            {
                Finalstr.append("Bharat"+" ");
            }
            else
            {
                Finalstr.append(Arr[i]+" ");
            }
        }      

        // String ret = new String(Finalstr);
        // ret.trim();
       System.out.println(Finalstr); 

    //    System.out.println(ret);
     
    }
}