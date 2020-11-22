package com.pojo;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;
import javax.persistence.Table;

@Entity
@Table(name= "department_tbl")
public class Department {

	@Id
	@GeneratedValue
	@Column(name= "department_id")
	private long id;
	
	@Column(name= "department_name")
	private String name;
	
	@Column(name= "department_site")
	private String site;

	public Department() {	}

	public Department(String departmentName, String departmentSite) {
		this.name = departmentName;
		this.site = departmentSite;
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
	public String getSite() {
		return site;
	}
	public void setSite(String site) {
		this.site = site;
	}
}
