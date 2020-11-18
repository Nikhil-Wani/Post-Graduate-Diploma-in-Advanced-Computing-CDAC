/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.test;

import com.pojo.Employee;
import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

/**
 *
 * @author dac_2
 */
public class EmpTest {
     public static void main(String args[]){
        EmpTest db=new EmpTest();
        db.insertEmployeeData();
    }
    public void insertEmployeeData(){
        Configuration cfg=new Configuration().configure("hibernate.cfg.xml");
        SessionFactory sf=cfg.buildSessionFactory();
        Session sess=sf.openSession();
        Transaction tx=sess.beginTransaction();
        /* Creating student Object*/
        Employee s=new Employee();
        s.setEmpName("xyz");
        s.setEmpDesg("Hyd-PE");
        sess.save(s);
        tx.commit();
        sess.close();
        System.out.println("---table created--data inserted");
        
        
    }
}
