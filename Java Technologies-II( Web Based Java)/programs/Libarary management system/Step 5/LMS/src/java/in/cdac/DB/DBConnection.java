/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package in.cdac.DB;


import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.logging.Level;
import java.util.logging.Logger;

public class DBConnection {
    
    Connection con = null;
    String query = null;
    
    public void createDBConnection(){
        String url = null;
        try 
        {
            Class.forName("com.mysql.jdbc.Driver");
            //Class.forName("oracle.jdbc.driver.OracleDriver"); Oracle
            
            url = "jdbc:mysql://localhost:3306/lms";
            //url = "jdbc:oracle:thin:@localhost:1521:lms"; Oracle
            
            con = DriverManager.getConnection(url,"root","");
            System.out.println("Database Connection is successfull");
        } catch (ClassNotFoundException ex) {
            Logger.getLogger(DBConnection.class.getName()).log(Level.SEVERE, null, ex);
        } catch (SQLException ex) {
            Logger.getLogger(DBConnection.class.getName()).log(Level.SEVERE, null, ex);
        }
    }   
        
    public boolean saveUserDetails(String useremail,
            String userpassword, String username, 
            String mobilenumber, String category)
    {
        boolean status = false;
        int rowcount = 0;
        Statement stmt = null;
        query = "insert into userdetails values('"+useremail+"','"+userpassword+"','"
                + ""+username+"','"+mobilenumber+"','"+category+"')";
        try {
            stmt = con.createStatement();
            rowcount = stmt.executeUpdate(query);
            if(rowcount > 0){
                System.out.println("Data inserted successfully..");
                status = saveUserRole(useremail);                
            }                       
        } catch (SQLException ex) {
            Logger.getLogger(DBConnection.class.getName()).log(Level.SEVERE, null, ex);
        } finally{
            if(con != null){
                try {
                    con.close();
                } catch (SQLException ex) {
                    Logger.getLogger(DBConnection.class.getName()).log(Level.SEVERE, null, ex);
                }
            }
        }
        return status;
    }
    
    
    public boolean saveUserRole(String useremail) {
        Statement stmt = null;
        int count = 0;
        boolean status = false;
        try {
            query = "insert into userroles values('" + useremail + "',2)";
            stmt = con.createStatement();
            count = stmt.executeUpdate(query);
            if (count > 0) {
                status = true;
            }
        } catch (SQLException sq) {
            sq.printStackTrace();
        } finally {
            if (con != null) {
                try {
                    con.close();
                } catch (SQLException ex) {
                    Logger.getLogger(DBConnection.class.getName()).log(Level.SEVERE, null, ex);
                }
            }
        }
        return status;
    }
    
    
    public boolean verifyuser(String useremail, String userpassword){
        Statement stmt = null;
        ResultSet rs = null;
        boolean status = false;        
        try {
        query = "select * from userdetails where useremail='"+useremail+"'"
                + " and userpassword='"+userpassword+"'";
        stmt = con.createStatement();
        rs = stmt.executeQuery(query);
        while(rs.next()){
            System.out.println("--"+rs.getString("username"));
            status = true;
        }
        }catch(SQLException sqle){
            sqle.printStackTrace();
        } 
        return status;
    }
    
    
    public int getUserRole(String useremail){
        Statement stmt = null;
        ResultSet rs = null;        
        int role = 0;
        try {
        query = "select role from userroles where useremail='"+useremail+"'";
        stmt = con.createStatement();
        rs = stmt.executeQuery(query);
        while(rs.next()){
            role = rs.getInt("role");
            System.out.println("--user role :"+role);            
        }
        }catch(SQLException sqle){
            sqle.printStackTrace();
        } finally{
            if(con != null){
                try {
                    con.close();
                } catch (SQLException ex) {
                    Logger.getLogger(DBConnection.class.getName()).log(Level.SEVERE, null, ex);
                }
            }
        }
        return role;
    }
    
    public static void main(String ap[])
    {
        
        DBConnection dbcon = new DBConnection();
        dbcon.createDBConnection();
        //dbcon.saveUserDetails("abc@11.in", "12345", "abc", "1234567890", "ECE");
        dbcon.verifyuser("muday@cdac.in", "12345");
    }
}
