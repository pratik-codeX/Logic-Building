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

    //Insert into Employee values(1,"Amit",21,'Pune',21000)
    public void InsertIntoTable(String name,
                                int age,
                                String address,
                                int salary
                                )

    {
        Employee eobj = new Employee(name,age,address,salary);
        Table.add(eobj);

        System.out.println("Marvellous DBMS : > New record inserted succesfully ");
    }

    //select * from Employee
    public void SelectStarFrom()
    {
        System.out.println("--------------------------------------------------------------");
        System.out.println("Data from the Employee Table");
        System.out.println("--------------------------------------------------------------");

        for (Employee eref : Table)
        {
            System.out.println(eref);
        }

        System.out.println("--------------------------------------------------------------");

    }
}

class program841
{
    public static void main(String A[]) throws Exception
    {
        MarvellousDBMS mobj = new MarvellousDBMS();

        Scanner sobj  = new Scanner(System.in);

        int iOption = 0;
        System.out.println("--------------------------------------------------------------");
        System.out.println("---------------------Marvellous DBMS--------------------------");
        System.out.println("--------------------------------------------------------------");


        while(iOption != 20)
        {
            System.out.println("--------------------------------------------------------------");
            System.out.println("1 : insert into Employee");
            System.out.println("2 : select * from employee");
            System.out.println("20 : terminate the DBMS ");
            System.out.println("--------------------------------------------------------------");

            System.out.println("Please select the desired operation on the database");
            iOption = sobj.nextInt();

            if(iOption == 1)
            {
                mobj.InsertIntoTable("sagar",21,"Pune",21000);
            }
            else if(iOption == 2)
            {
                mobj.SelectStarFrom();
            }   
            else if(iOption == 20)
            {
                System.out.println("Thank you for using our Application...");
                mobj = null;
                System.gc();
                break;
            }

        }//End of while
    }//End of main method
}//End of main class