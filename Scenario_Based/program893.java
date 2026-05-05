import java.util.*;
import java.time.LocalDateTime;
import java.time.LocalDate;
import java.io.*;

class program893
{
    public static void main(String A[]) 
    {
       String FileName = "Marvellous.csv";

       try(FileWriter fwobj = new FileWriter(FileName))
       {
            fwobj.write("Name,marks\n");
            fwobj.write("Sagar,90\n");
            fwobj.write("Amit,80\n");
            fwobj.write("pooja,85\n");
       }
       catch(Exception eobj)
       {
            System.out.println("Exception occured");
       }

    }
}