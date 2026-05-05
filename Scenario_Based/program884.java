import java.util.*;

class program884
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        ArrayList <Integer>aobj = new ArrayList<Integer>(); //It is combination of linkedlist and array

        aobj.add(11);//InsertLast
        aobj.add(21);
        aobj.add(51);
        aobj.add(101);
        aobj.add(111);

        for(int i : aobj)       //Traversal using for each loop
        {
            System.out.println(i);
        }
        sobj.close();
    }
}