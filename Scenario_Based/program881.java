//input : Hello Hlloe
//Output : String is anagram

//check anagram

/**
 * 0    1   2   3   4   5   6   7   8   9 ...
 * a    b   c   d   e   f   g   h   i   j ...
 * 97   98  99 100 101 102 103 104 105 106...
*/

import java.util.*;

class program881
{
    public static void main(String A[]) 
    {
       

        Scanner sobj = new Scanner(System.in);

        String str1 = null;
        System.out.println("Enter first String : ");
        str1 = sobj.nextLine();

        String str2 = null;
        System.out.println("Enter second String : ");
        str2 = sobj.nextLine();

        if(str1.length() != str2.length())
        {
            System.out.println("Strings are not anagram");
            return;
        }


        char Arr[] = str1.toCharArray();
        char Brr[] = str2.toCharArray();

        int Count[] = new int[26];

        int i = 0;

        for(i = 0; i < Arr.length; i++)
        {
            Count[Arr[i]- 'a']++;
            Count[Brr[i]- 'a']--;
        }

        boolean bflag = true;

        for(i = 0; i < Count.length; i++)
        {
            if(Count[i] != 0)
            {
                bflag = false;
                break;
            }
        }

        if(bflag == true)
        {
            System.out.println("Strings are anagram");
        }
        else
        {
            System.out.println("Strings are not anagram");
        }

        
    }
}