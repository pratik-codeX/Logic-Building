import java.util.*;
import java.time.LocalDateTime;
import java.time.LocalDate;
import java.io.*;

class program892
{
    public static void main(String A[]) throws IOException
    {
       String FileName = "Marvellous.csv";

       FileWriter fwobj = new FileWriter(FileName);

       fwobj.write("Name,marks\n");   //Did'nt written into csv 
    }
}