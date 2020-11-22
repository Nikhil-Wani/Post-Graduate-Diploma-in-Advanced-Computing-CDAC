package com.pojo;

import javax.persistence.CascadeType;
import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;
import javax.persistence.ManyToOne;
import javax.persistence.Table;

@Entity
@Table(name= "employee_tbl")
public class Employee {

	@Id
	@GeneratedValue
	@Column(name= "employee_id")
	private long id;
	
	@Column(name= "employee_name")
	private String name;
	
	@ManyToOne(cascade= CascadeType.ALL)
	private Department department;

	public Employee() {	}

	public Employee(String employeeName, Department employeeDepartment) {
		this.name = employeeName;
		this.department = employeeDepartment;
	}

	public long getId() {
		return id;
	}
	public void setId(long id) {
		this.id = id;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public Department getDepartment() {
		return department;
	}
	public void setDepartment(Department department) {
		this.department = department;
	}
}
