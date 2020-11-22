/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.pojo;

import javax.persistence.CascadeType;
import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.OneToOne;
import javax.persistence.Table;

/**
 *
 * @author jyothi
 */
@Entity
@Table(name = "address")
public class Address {

    @Id
    @Column(name = "address_id")
    int addressId;
    @Column(name="place")
    String place;
    @OneToOne(targetEntity = Student.class,cascade = CascadeType.ALL)
    @JoinColumn(name = "stu_id",referencedColumnName = "sid")            
    Student std;

    public int getAddressId() {
        return addressId;
    }

    public void setAddressId(int addressId) {
        this.addressId = addressId;
    }

    public String getPlace() {
        return place;
    }

    public void setPlace(String place) {
        this.place = place;
    }

    public Student getStd() {
        return std;
    }

    public void setStd(Student std) {
        this.std = std;
    }
    
    
}
