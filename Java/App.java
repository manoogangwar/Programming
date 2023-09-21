package Java;


import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.*;


public class App
 {

    public static void main(String[] args){

        try {
            // option1
            Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver");
            System.out.println("Connecting...");
            String server = "LAPTOP-T86S9FEG";
            String database = "Employee"; 
            String password = "manu";
            String connectionUrl = "jdbc:sqlserver://"+server+":1433; databaseName="+database+";user=sa;password="+password+";encrypt=true; trustServerCertificate=true"; 
            Connection con= DriverManager.getConnection(connectionUrl);

            if(con!=null){
                System.out.println("connected");
            }

            String str="select * from employee";

            PreparedStatement p=con.prepareStatement(str); 
            ResultSet rs=p.executeQuery();

            while(rs.next()){
                System.out.println(rs.getString(1)+"\t\t"+rs.getString(2)+
                "\t\t"+rs.getString(3)+"\t\t"+rs.getString(4)+"\t\t"+rs.getString(5));
            } 
            con.close();

        } 
        catch (Exception e) {
        System.out.println("connection failed\n" + e);
        }
    }
}