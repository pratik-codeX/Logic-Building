import java.util.Scanner;

class MarvellousString      //Server
{
    public int CountSmall(String str)
    {
        char Arr[] = str.toCharArray(); //character to array

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
}

class program210   //Client
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string :");
        String str = sobj.nextLine();

        MarvellousString mobj = new MarvellousString();

        int iRet = 0;   //rikami pishvi

        iRet = mobj.CountSmall(str);
       
        System.out.println("Number of small character is :"+iRet);
    }
}