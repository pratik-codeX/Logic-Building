import java.util.*;
import java.io.*;

class Employee implements Serializable    //Marker interface class cha object file madhe yenar the object of emplyee class can be written into another file
{                                             //class cha declareation hava asto ani yaat example as thali var same type chi thali copy keli means contents
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

class program838
{
    public static void main(String A[]) throws Exception
    {
        Employee eobj1 = new Employee("Amit",23,"Pune",21000);

        FileOutputStream fos = new FileOutputStream("LBData.ser");
        ObjectOutputStream oos = new ObjectOutputStream(fos);

        oos.writeObject(eobj1);

        oos.close();
        fos.close();

        System.out.println("Data written into the file is :"+ eobj1);

    }
}