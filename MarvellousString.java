package MarvellousLB;

public class MarvellousString      //Server    
{
     public String str;

    public MarvellousString(String a)
    {
        this.str = a;
    }

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