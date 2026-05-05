import java.util.*;
import java.io.*;

class Employee implements Serializable     //Schema of table
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

class MarvellousDBMS implements Serializable         //Actual this class uses schema of employee
{           
    private LinkedList<Employee> Table;

    public MarvellousDBMS()
    {
        System.out.println("Marvellous DBMS Started Successfully...");

        Table = new LinkedList();
    }

    
}

class program840
{
    public static void main(String A[]) throws Exception
    {
            MarvellousDBMS mobj = new MarvellousDBMS();
    }
}