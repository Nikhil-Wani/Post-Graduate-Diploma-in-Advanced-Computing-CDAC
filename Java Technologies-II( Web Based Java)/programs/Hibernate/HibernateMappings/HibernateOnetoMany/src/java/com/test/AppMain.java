package com.test;

import com.pojo.MarksDetails;
import com.pojo.Student;
import java.util.HashSet;
import java.util.Set;
import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.boot.registry.StandardServiceRegistryBuilder;
import org.hibernate.cfg.Configuration;
import org.hibernate.service.ServiceRegistry;

public class AppMain {

	static Session sessionObj;
	static SessionFactory sessionFactoryObj;

	private static SessionFactory buildSessionFactory() {
		// Creating Configuration Instance & Passing Hibernate Configuration File
		Configuration configObj = new Configuration();
		configObj.configure("hibernate.cfg.xml");

		

		// Creating Hibernate SessionFactory Instance
		sessionFactoryObj = configObj.buildSessionFactory();
		return sessionFactoryObj;
	}

	public static void main(String[] args) {
		System.out.println(".......Hibernate One To Many Mapping Example.......\n");
		try {
			sessionObj = buildSessionFactory().openSession();
			sessionObj.beginTransaction();
                        Set<MarksDetails> s=new HashSet<MarksDetails>();
			Student studentObj = new Student("Java", "Geek",  "javageek@javacodegeeks.com", "0123456789");
			//sessionObj.save(studentObj);

			MarksDetails marksObj1 = new MarksDetails("English", "100", "90",  "Pass");  
			marksObj1.setStudent(studentObj);  
			//sessionObj.save(marksObj1);

			MarksDetails marksObj2 = new MarksDetails("Maths", "100", "99",  "Pass");  
			marksObj2.setStudent(studentObj);
			//sessionObj.save(marksObj2);

			MarksDetails marksObj3 = new MarksDetails("Science", "100", "94",  "Pass");  
			marksObj3.setStudent(studentObj);
			//sessionObj.save(marksObj3);
                        s.add(marksObj3);
                        s.add(marksObj2);
                        s.add(marksObj1);
                        studentObj.setMarksDetails(s);
                        sessionObj.save(studentObj);

			// Committing The Transactions To The Database
			sessionObj.getTransaction().commit();

			System.out.println("\n.......Records Saved Successfully To The Database.......");
		} catch(Exception sqlException) {
			if(null != sessionObj.getTransaction()) {
				System.out.println("\n.......Transaction Is Being Rolled Back.......");
				sessionObj.getTransaction().rollback();
			}
			sqlException.printStackTrace();
		} finally {
			if(sessionObj != null) {
				sessionObj.close();
			}
		}
	}
}