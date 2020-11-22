/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.test;

import com.pojo.Address;
import com.pojo.Student;

import org.hibernate.Session;
import org.hibernate.Transaction;
import org.hibernate.cfg.AnnotationConfiguration;
import org.hibernate.cfg.Configuration;

/**
 *
 * @author jyothi
 */
public class test {

    public static void main(String args[]) {

        Session session = new AnnotationConfiguration().configure("hibernate.cfg.xml").buildSessionFactory().openSession();
        Student s = new Student();
        s.setId(101);
        s.setSname("James");
        s.setGroup("mpc");

        Address ad = new Address();
        ad.setAddressId(1);
        ad.setPlace("Carolina");
        ad.setStd(s);
        Transaction tx = session.beginTransaction();
        session.save(ad);
        tx.commit();
        session.close();
        System.out.println("One to One with annotations is done..!!!!");

    }
}
