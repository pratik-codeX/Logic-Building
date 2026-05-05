//_ _ _India_ _ _ _is_ _my_country_ _ _ _ 
//After Trim
//India_ _ _ _is_ _my_country

import java.util.*;

class program509
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);  

        System.out.println("Enter String : ");

        String str = sobj.nextLine();

        str = str.trim();

        char Arr[] = str.toCharArray();
        char Brr[] = new char[Arr.length];

        int iCount = 0 , i = 0,j = 0;

        for(i = 0;i < Arr.length;i++)
        {
            if(Arr[i] != ' ')
            {
                Brr[j] = Arr[i];
                j++;
            }
        }

        String output = new String(Brr);

        output = output.trim();
        System.out.println("Updated String is :"+output);
        System.out.println("Legth is :"+output.length());


    }
}