import java.util.*;

class program522
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);  
        System.out.println("Enter String : ");

        String str = sobj.nextLine();

        str = str.trim();
  
        str =  str.replaceAll("\\s+"," ");      

        String tokens[] = str.split(" ");
        int iMax = 0;

        String MaxStr = null;

        iMax = tokens[0].length();

        for(int i = 0;i < tokens.length;i++)
        {
            if(tokens[i].length() > iMax)
            {
                iMax = tokens[i].length();
                MaxStr = tokens[i];
            }
        }

     System.out.println("Larges  word in string is of : "+ MaxStr +" having " + iMax);
        
        
    }
}