import java.util.*;
import java.io.*;

class Employee implements Serializable     
{
    public int EmpID;
    public String EmpName;
    public int EmpAge;
    public String EmpAddress;
    public int EmpSalary;
  
    private static int Counter = 1;

    static     
    {
       
        Counter = 1;
    }

    public Employee(String b,int c,String d,int e)
    {
        this.EmpID = Counter++;
        this.EmpName= b;
        this.EmpAge = c;
        this.EmpAddress= d;
        this.EmpSalary = e;
    }

    public void DisplayInformation()
    {
        System.out.println("Emp ID : "+this.EmpID+"Name :"+EmpName+" Age :"+EmpAge+" Address :"+EmpAddress+" Salary :"+EmpSalary);
    }

    public String toString()
    {
        return "ID : "+this.EmpID+"Name :"+EmpName+" Age :"+EmpAge+" Address :"+EmpAddress+" Salary :"+EmpSalary+"\n";
    }
}

class program839
{
    public static void main(String A[]) throws Exception
    {
        FileInputStream fis = new FileInputStream("LBData.ser");
        ObjectInputStream ois = new ObjectInputStream(fis);

        Employee eobj1 = (Employee) ois.readObject();

        fis.close();
        ois.close();

        System.out.println("Data read from the file is : "+ eobj1);

    }
}