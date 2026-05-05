import java.util.*;
import java.io.*;

class program465
{
    public static void main(String A[])
    {
        try
        {   
            Scanner sobj = new Scanner(System.in);
            
            System.out.println("Enter the name of Directory that you want to pack :");
            String DirName = sobj.nextLine();
      
            System.out.println("Enter the name of file that you want to create for packing :");
            String PackName = sobj.nextLine();

            File PackObj = new File(PackName);

           boolean bRet = PackObj.createNewFile();

           if(bRet == false)
           {
                System.out.println("Unable to create Pack File");
                return;
           }

            

            File fobj = new File(DirName);

            if((fobj.exists())  && (fobj.isDirectory()))
            {
                System.out.println("Directory is present");

                 //Retrive all files from directory
                File Arr[] = fobj.listFiles();

                System.out.println("Number of files in directory are :"+Arr.length);

                //Packed File object
                FileOutputStream foobj = new FileOutputStream(PackObj);

                //Buffer for read and write activity
                byte Buffer[] = new byte[1024];

                String Header = null;

                //Directory Traversal
                for(i = 0;i< Arr.length;i++)
                {
                    Header = Arr[i].getName() + " " + Arr[i].length();
                    
                    //Loop to form 100 bytes header
                    for(j = Header.length();j < 100;j++)
                    {
                        Header = Header + " ";
                    }

                    //Write header into packed file
                    foobj.write(Header.getBytes());

                    //Open file from directory for reading
                    FileInputStream fiobj = new FileInputStream(Arr[i]);

                    //Write contents of file into packed file
                    while((iRet = fiobj.read(Buffer)) != -1)
                    {
                        foobj.write(Buffer,0,iRet);

                        System.out.println("File named Scanned :"+Arr[i].getName());
                        System.out.println("File size read :"+iRet);

                    }

                    fiobj.close();
                }
                System.out.println("Packing Activity is Done");
            }
            else
            {
                System.out.println("There is no such Directory");
            }
        }
        catch(Exception eobj)
        {}
    }
}
