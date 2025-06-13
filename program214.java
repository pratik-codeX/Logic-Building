// input : HeLLo
// output : #e##0
import java.util.Scanner;

class MarvellousString     
{
    public MarvellousString(String a)
    {
        this.str = a;
    }

    public String str;

    public int CountSmall()
    {
        char Arr[] = str.toCharArray();

        int iCount = 0 ,iCnt = 0;

        for(iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
            iCount++;
            }
        }
        return iCount;
    }

    public String UpdateString()
    {
         char Arr[] = str.toCharArray();

        int iCount = 0 ,iCnt = 0;

        for(iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                Arr[iCnt] = '#';
            }
        }
        
        String ret = new String(Arr);

        return ret;

    }
}

class program214  
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);


        System.out.println("Please enter string :");
        String data = sobj.nextLine();

        MarvellousString mobj = new MarvellousString(data);

        String sRet = null ;

        sRet = mobj.UpdateString();
       
        System.out.println("Updated String iss :"+sRet);
    }
}