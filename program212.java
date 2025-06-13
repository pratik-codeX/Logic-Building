import java.util.Scanner;

class MarvellousString      //Server    //one of the best code
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
}

class program212   //Client
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string :");
        String data = sobj.nextLine();

        MarvellousString mobj = new MarvellousString(data);

        int iRet = 0;

        iRet = mobj.CountSmall();
       
        System.out.println("Number of small character is :"+iRet);
    }
}