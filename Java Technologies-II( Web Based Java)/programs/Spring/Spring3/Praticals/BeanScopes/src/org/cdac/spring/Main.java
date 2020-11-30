package org.cdac.spring;

import org.springframework.beans.factory.BeanFactory;
import org.springframework.beans.factory.xml.XmlBeanFactory;
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;
import org.springframework.core.io.ClassPathResource;
import org.springframework.core.io.Resource;

public class Main {
@SuppressWarnings("resource")
public static void main(String[] args) {
	Resource r=new ClassPathResource("applicationContext.xml");
	BeanFactory factory=new XmlBeanFactory(r);
	
	//ApplicationContext factory=new ClassPathXmlApplicationContext("applicationContext.xml");
	
	
	Employee singleton=(Employee)factory.getBean("obj");
	singleton.setCity("Ameerpet");
	  singleton.display();
        
       Employee singleton1=(Employee)factory.getBean("obj");
singleton.setCity("Ameerpet1");
	singleton.display();
	
	
	
	/*Employee prototype=(Employee)factory.getBean("obj");
	//prototype.setCity("Kallepally");
	prototype.display();*/
	
	
}
}
