import java.util.*;

class StringX
{
    public static String Trim(String str)
    {
        int i = 0,iStart = 0 , iEnd = 0;

        char Arr[] = str.toCharArray();     //_ _ _JAY_ _GANESH_ _ _
 
       if(Arr[0] == ' ')
       {
            System.out.println("Inside First IF ");
            while((Arr[i] == ' ') && (i < Arr.length))
            {
                i++;
            }
       }

        iStart = i;

        i = Arr.length - 1;

        if(Arr[Arr.length - 1] == ' ')
       {
            System.out.println("Inside second if ");
            while(Arr[i] == ' ')
            {
                i--;
            }
       }
        iEnd = i;
    
        //String(Array_name,String_index,count)
        return new String(Arr,iStart,iEnd-iStart+1);
    }
}

class program489
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        String sRet = StringX.Trim(str);

        System.out.println("Updated String is : "+sRet);
        System.out.println("String Length is : "+sRet.length());

    }
}