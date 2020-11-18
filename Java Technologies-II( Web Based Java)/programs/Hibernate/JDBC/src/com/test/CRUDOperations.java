/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.test;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

/**
 *
 * @author dac_2
 */
public class CRUDOperations {

    public static Connection con = null;

    public static void main(String args[]) throws ClassNotFoundException, SQLException {
        CRUDOperations co = new CRUDOperations();
        con = co.createDBConnection();
        /* 1.Insert Employee into the database */
        //co.insertEmployee();
        /* 2.select Employees from database */
        //co.selectEmployee();
        /* 3.update Employee */
        //co.updateEmployee();
        /* 4.delete Employee */
        co.deleteEmployee();
    }

    public Connection createDBConnection() throws ClassNotFoundException, SQLException {
        Class.forName("com.mysql.jdbc.Driver");
        con = DriverManager.getConnection("jdbc:mysql://localhost:3306/Dac", "root", "");
        return con;
    }

    public void insertEmployee() throws ClassNotFoundException, SQLException {

        Statement st = con.createStatement();
        String s = "insert into Employee(sno,name,address,designation) values(1,'viswanath','hyd','PE')";
        int i = st.executeUpdate(s);
        if (i > 0) {
            System.out.println("--Employee is inserted successfully--");
        }
        con.close();
    }

    public void updateEmployee() throws SQLException {
        Statement st = con.createStatement();
        String s = "update Employee set name='viswa' where sno=1";
        int i = st.executeUpdate(s);
        if (i > 0) {
            System.out.println("--Employee is updated successfully--");
        }
        con.close();
    }

    public void selectEmployee() throws SQLException {
        Statement st = con.createStatement();
        String s = "select name from Employee where sno=1";
        ResultSet rs = st.executeQuery(s);
        while (rs.next()) {
            //System.out.println("---sno--" + rs.getInt("sno"));
            System.out.println("---name--" + rs.getString(1));
            //System.out.println("---address--" + rs.getString("address"));
            //System.out.println("---designation--" + rs.getString("designation"));

        }
        con.close();
    }
    public void deleteEmployee() throws SQLException {
        Statement st = con.createStatement();
        String s = "delete from Employee  where sno=1";
        int i = st.executeUpdate(s);
        if (i > 0) {
            System.out.println("--Employee is deleted successfully--");
        }
        con.close();
    }
}
