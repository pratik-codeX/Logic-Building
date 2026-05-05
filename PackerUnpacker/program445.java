import java.util.*;
import java.io.*;

class program445
{
    public static void main(String A[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the name of source file : ");
            String Source = sobj.nextLine();

            System.out.println("Enter the name of destination file :");
            String Destination = sobj.nextLine();

            File fSource = new File(Source);
            if(fSource.exists() == false)
            {
                System.out.println("Source File is not Present");
                return;
            }
          
            File fDestination = new File(Destination);
            if(fDestination.exists() == true)
            {
                System.out.println("Destination File is Present...");
                return;
            }

            fDestination.createNewFile();

            FileInputStream fiobj = new FileInputStream(fSource);
            FileOutputStream foobj = new FileOutputStream(fDestination);
            
            byte Buffer[] = new byte[1024];
            int iRet = 0;

            while((fiobj.read(Buffer)) != -1)
            {
                foobj.write(Buffer);
            }

            System.out.println("File copy done...");
        }
        catch(Exception eobj)
        {}
    }
}