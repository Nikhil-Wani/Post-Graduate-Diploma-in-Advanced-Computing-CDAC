package com.test;

import com.pojo.Department;
import com.pojo.Employee;
import org.hibernate.HibernateException;
import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.boot.registry.StandardServiceRegistryBuilder;
import org.hibernate.cfg.Configuration;
import org.hibernate.service.ServiceRegistry;

public class AppMain {

	private static SessionFactory buildSessionFactory() {
		// Creating Configuration Instance & Passing Hibernate Configuration File
		Configuration configObj = new Configuration();
		configObj.configure("hibernate.cfg.xml");

		

		// Creating Hibernate SessionFactory Instance
		SessionFactory sessionFactoryObj = configObj.buildSessionFactory();
		return sessionFactoryObj;
	}

	public static void main(String[] args) {
		Session sessionObj = null;

		System.out.println("\n.......Hibernate Many To One Mapping Example.......\n");
		try {
			// Getting Session Object From SessionFactory.
			sessionObj = buildSessionFactory().openSession();

			sessionObj.beginTransaction();

			Department department = new Department("Technology", "Sector 18, Gurugram");

			// By using cascade=all option the department need not be saved explicitly when the employee object is persisted the department will be automatically saved.
			Employee employee1 = new Employee("ABC", department);
			Employee employee2 = new Employee("XYZ", department);

			sessionObj.save(employee1);
			sessionObj.save(employee2);

			// Committing The Transactions To The Database.
			sessionObj.getTransaction().commit();

			System.out.println("\n.......Records Saved Successfully To The Database.......\n");
		} catch(HibernateException hibernateException) {
			if(sessionObj != null && 
					sessionObj.getTransaction() != null) {
				System.out.println("\n.......Transaction Is Being Rolled Back.......");
				sessionObj.getTransaction().rollback();
			}
			hibernateException.printStackTrace();
		} finally {
			if(sessionObj != null) {
				sessionObj.close();
			}
		}
	}
}
