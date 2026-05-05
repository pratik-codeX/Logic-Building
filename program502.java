import java.util.*;

/*
    convert str1 to char array as Arr
    convert str2 to char array as Brr

    create array Count1 of size 26 for Arr
    create array Count2 of size 26 for Brr

    travel Arr and maintain the frequency in Count1
    travel Brr and maintain the frequency in Count2

    compare Count1 and Count2
    if thay are equal return true
    else return false
*/

class Marvellous
{
    public static boolean CheckAnagram(String str1,String str2)
    {   
        boolean bFlag = true;
        int i = 0;

        if(str1.length() != str2.length())
        {
            return false;
        }

        char Arr[] = str1.toCharArray();        //50
        char Brr[] = str2.toCharArray();        //50

        int Count[] = new int[26];             //104
    
        for(i = 0;i < Arr.length;i++)           
        {   
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                Count[Arr[i]-'a']++;   
            }

              if(Brr[i] >= 'a' && Brr[i] <= 'z')
            {
                Count[Brr[i]-'a']--;   
            }
        }

        for(i = 0;i < 26;i++)
        {
            if(Count[i] != 0)
            {
                bFlag = false;
                break;
            }
        }
        return bFlag;
    }
}

class program502
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first String : ");
        String str1 = sobj.nextLine();

        System.out.println("Enter the second String : ");
        String str2 = sobj.nextLine();

        boolean bRet = false;

        bRet = Marvellous.CheckAnagram(str1,str2);

        if(bRet == true)
        {
            System.out.println("Strings are Anagram");
        }
        else
        {
            System.out.println("Strings are not Anagram");
        }
    }
}