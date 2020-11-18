/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.test;

import com.pojo.Item;
import java.util.List;
import org.hibernate.Criteria;
import org.hibernate.Query;

import org.hibernate.Session;
import org.hibernate.Transaction;
import org.hibernate.cfg.AnnotationConfiguration;
import org.hibernate.criterion.Projections;
import org.hibernate.criterion.Restrictions;

/**
 *
 * @author dac_2
 */
public class DBOperations {
    public static void main(String args[]){
        DBOperations db=new DBOperations();
       /* db.insertItems();
        db.fetchItems();
        db.updateItemName();
        db.fetchItems();
        db.deleteItem();
        db.fetchItems();*/
       // db.fetchItemsByCriteria();
        db.fetchItemsByNamedQuery();
    }
    public void insertItems(){
        Session s=new AnnotationConfiguration().configure("hibernate.cfg.xml").buildSessionFactory().openSession();
        Transaction tx=s.beginTransaction();
        Item i=new Item();
        i.setItemName("xyz");
        i.setPrice(500.0);
        s.save(i);
        tx.commit();
        s.close();
        
    }
    public void fetchItems(){
        Session s=new AnnotationConfiguration().configure("hibernate.cfg.xml").buildSessionFactory().openSession();
        Query q=s.createQuery("from Item where id=:id");
        q.setParameter("id", 1);
        List<Item> items=q.list();
        System.out.println("----"+items.toString());
        s.close();
    }
    public void updateItemName(){
        Session s=new AnnotationConfiguration().configure("hibernate.cfg.xml").buildSessionFactory().openSession();
        Transaction tx=s.beginTransaction();
        Query q=s.createQuery("update Item set itemName=:name where id=:id");
        q.setParameter("name", "abc");
        q.setParameter("id", 1);
        int i=q.executeUpdate();
        tx.commit();
        s.clear();
    }
    public void deleteItem(){
        Session s=new AnnotationConfiguration().configure("hibernate.cfg.xml").buildSessionFactory().openSession();
        Transaction tx=s.beginTransaction();
        Query q=s.createQuery("delete from Item  where id=:id");        
        q.setParameter("id", 1);
        int i=q.executeUpdate();
        tx.commit();
        s.clear();
    }
     public void fetchItemsByCriteria(){
        Session s=new AnnotationConfiguration().configure("hibernate.cfg.xml").buildSessionFactory().openSession();
        Criteria c=s.createCriteria(Item.class);
        /*c.add(Restrictions.eq("id", 2)); */
        c.setProjection(Projections.property("itemName"));
        List<Item> items=c.list();
        System.out.println("----"+items.toString());
        s.close();
    }
     public void fetchItemsByNamedQuery(){
        Session s=new AnnotationConfiguration().configure("hibernate.cfg.xml").buildSessionFactory().openSession();
        Query q=s.getNamedQuery("fetchItemsById");
        q.setParameter("id", 2);
        List<Item> items=q.list();
        System.out.println("----"+items.toString());
        s.close();
    }
}
