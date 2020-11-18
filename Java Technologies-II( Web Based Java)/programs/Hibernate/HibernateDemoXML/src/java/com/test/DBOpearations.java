/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.test;

import com.pojo.Student;
import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

/**
 *
 * @author dac_2
 */
public class DBOpearations {
    public static void main(String args[]){
        DBOpearations db=new DBOpearations();
        db.insertStudentData();
    }
    public void insertStudentData(){
        Configuration cfg=new Configuration().configure("hibernate.cfg.xml");
        SessionFactory sf=cfg.buildSessionFactory();
        Session sess=sf.openSession();
        Transaction tx=sess.beginTransaction();
        /* Creating student Object*/
        Student s=new Student();
        s.setSname("xyz");
        s.setSaddress("Hyd-cdac");
        sess.save(s);
        tx.commit();
        sess.close();
        System.out.println("---table created--data inserted");
        
        
    }
}
