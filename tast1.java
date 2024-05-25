import java.sql.*;

class test1
{
    public static void main(String Arg[])
    {
        try
        {
            Connection cobj = DriverManager.getConnection("Path","Username","password");

            Statement sobj = cobj.createStatement();

            ResultSet robj = sobj.executeQuery("Select * from Student");
        }
    }
}