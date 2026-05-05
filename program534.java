//hello demo madam nayan ppa level for radar
//madam nayan level radar

import java.util.*;

class program534
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);  

        System.out.println("Enter word : ");

        String str = sobj.nextLine();
        str = str.trim();
        str = str.replaceAll("\\s+"," ");

        String tokens[] = str.split(" ");

        for(String s : tokens)
        {
            StringBuilder sb = new StringBuilder(s);

            sb.reverse();

            if(str.equals(new String(sb)))
            {
                System.out.println(s);
            }
        }
        }

        
}
