package org.cdac.spring;

public class Address {  
private String city;  
private String state;  
private String country;  
  
public Address(String city, String state, String country) {  
    super();  
    this.city = city;  
    this.state = state;  
    this.country = country;  
}  
  
public String toString(){  
    return city+" "+state+" "+country;  
}  
}  