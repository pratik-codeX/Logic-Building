import java.util.*;

class program875
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

        hobj.put('h',1);
        hobj.put('e',1);
        hobj.put('l',1);
        hobj.put('l',2);
        hobj.put('o',1);

        System.out.println(hobj.keySet());

        System.out.println(hobj.get('h'));
        System.out.println(hobj.get('l'));

    }  
}