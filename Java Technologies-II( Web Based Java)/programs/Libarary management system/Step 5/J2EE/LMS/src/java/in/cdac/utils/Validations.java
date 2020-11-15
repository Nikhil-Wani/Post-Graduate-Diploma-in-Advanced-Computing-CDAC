/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package in.cdac.utils;

/**
 *
 * @author dac_2
 */
public class Validations {

    public boolean validateUserName(String name) {
        if (name != null && !name.isEmpty()) {
            return true;
        } else {
            return false;
        }
    }
    
    public boolean validateEmail(String email) {
        if (email != null && !email.isEmpty()) {
            return true;
        } else {
            return false;
        }
    }
    
    public boolean validatepassword(String pwd) {
        if (pwd != null && !pwd.isEmpty()) {
            return true;
        } else {
            return false;
        }
    }
    
    public boolean validateMobile(String mobile) {
        int count = 0;
        if (mobile != null && !mobile.isEmpty())
        {
            if(mobile.length() == 10)
            {
                for (char c : mobile.toCharArray())
                {
                    if(Character.isDigit(c)){
                      count++;  
                    }
                }
                if(count == 10){
                    return true;
                }
            }
        } 
        return false;        
    }  
}
