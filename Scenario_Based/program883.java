/**
 * Using Collections
 * 
 */

import java.util.*;

class program883
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

        System.out.println(aobj);

        sobj.close();
    }
}