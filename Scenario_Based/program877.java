import java.util.*;

class program877
{
    public static void main(String A[]) 
    {
        String str = null;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter String : ");
        str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        //h    e   l   l   o
        HashMap <Character,Integer>hobj = new HashMap<Character,Integer>();

        int old = 0;

        for(char ch : Arr)
        {
            if(hobj.containsKey(ch))
            {
                old = hobj.get(ch);
                hobj.put(ch,old+1);
            }
            else
            {
                hobj.put(ch,1);
            }
        }
        System.out.println(hobj);

        for(char ch : hobj.keySet())
        {
            System.out.println(ch + " : "+hobj.get(ch));
        }
    }  
}