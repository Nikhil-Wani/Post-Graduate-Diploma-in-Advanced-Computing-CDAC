package org.cdac.spring;

import org.springframework.context.ApplicationContext;
import org.springframework.context.annotation.AnnotationConfigApplicationContext;

public class Main {
	@SuppressWarnings("resource")
	public static void main(String[] args) {
		ApplicationContext ctx = new AnnotationConfigApplicationContext(EmployeeConfig.class);
		Employee emp = (Employee) ctx.getBean(Employee.class);
		emp.setCity("Hyderabad");
		emp.setId(106304);
		emp.setName("Rajashekhar");
		
		
		System.out.println("Name------->" + emp.getName());
		System.out.println("City------->" + emp.getCity());
		System.out.println("Emp Id------->" + emp.getId());

	}
}
