<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>User Registeration</title>
<style type="text/css">
<!--
.style1 {font-weight: bold}
-->
</style>
</head>

<body bgcolor="#CCFFFF">
<form name="input" action="user_registeration_ack.php">
<table cellspacing="2" cellpadding="0" width="83%"
                        bgcolor="" border="0">
                        <tbody>
                              <tr> 
                                <td class="style10" width="176" bgcolor="">&nbsp;</td>
<td class="style1 style7" bgcolor=""
                              colspan="3"><table cellspacing="0" cellpadding="0"
                              width="100%" border="0">
                                    
                          </table>
                              <p><b>&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;Enter the Details 
                                to register</b></p>
                              </td>
                              </tr>
                              <tr> 
                                <td class="style10" bgcolor=""
                              height="17">&nbsp;&nbsp;First Name<font color="red">* &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</font></td>
                                <td bgcolor="" colspan="3"><input
                              class="forbuttonfield" maxlength="20" size="25"
                              name="first_name" value="<?php if(isset($_SESSION['$fname'])){echo htmlentities($_SESSION['$fname']);}?>"/></td>
                              </tr>
                              <tr> 
                                <td bgcolor="" height="17"><span
                              class="style10">&nbsp;&nbsp;Middle Name</span></td>
                                <td bgcolor="" colspan="3"><input class="forbuttonfield" maxlength="20" size="25"
                              name="mid_name"  value="<? if(isset($_SESSION['$mname'])){ echo htmlentities($_SESSION['$mname']);} ?>"/></td>
                              </tr>
                              <tr> 
                                <td bgcolor="" height="23"><span
                              class="style10">&nbsp;&nbsp;Last Name<font color="red">*</font></span></td>
                                <td bgcolor="" colspan="3"><input
                              class="forbuttonfield" maxlength="20" size="25"
                              name="last_name" value="<? if(isset($_SESSION['$lname'])) echo htmlentities($_SESSION['$lname']); ?>"/></td>
                              </tr>

							 
                              <tr> 
                                <td bgcolor="" height="17"><span
                              class="style10">&nbsp;&nbsp;e-Mail Address<font color="red">*</font></span></td>
                                <td bgcolor="" colspan="3"><input
                              class="forbuttonfield" maxlength="50" size="30"
                              name="email" value="<? if(isset($_SESSION['$email'])) echo htmlentities($_SESSION['$email']); ?>"/></td>
                              </tr>
                              <tr> 
                                <td bgcolor="" height="20"><span
                              class="style10">&nbsp;&nbsp;Re-Enter&nbsp; e-Mail Address 
                                  &nbsp;&nbsp;For Confirmation<font color="red">*</font> </span></td>
<td colspan="3" bgcolor=""><span
                              class="style10"> 
                                  <input
                              class="forbuttonfield" maxlength="50" size="30"
                              name="email2" value="<? if(isset($_SESSION['$email2'])) echo htmlentities($_SESSION['$email2']); ?>"/>
                                  </span></td>
                              </tr>
                              <tr> 
                                <td bgcolor="" height="17">&nbsp;</td>
                                <td bgcolor="" colspan="3"><p class="style10"><strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Permanent Address</strong></p>
                                </td>
                          </tr>
                              <tr> 
                                <td bgcolor="" height="17"><span
                              class="style10">&nbsp;&nbsp;Flat/Door/Block No.<font color="red">*</font></span></td>
                                <td bgcolor=""><span
                              class="style10"> 
                                  <input
                              class="forbuttonfield" maxlength="30" size="25"
                              name="perm_flat" value="<? if(isset($_SESSION['$perm_flat'])) echo htmlentities($_SESSION['$perm_flat']); ?>" />
                                  </span></td>
                                <td width="492" bgcolor=""><span
                              class="style10">&nbsp;Name of &nbsp;Premise/Village</span></td>
                              <td width="381" bgcolor=""><span
                              class="style10"> 
          <input
                              class="forbuttonfield" maxlength="40" size="25"
                              name="perm_premise"  value="<? if(isset($_SESSION['$perm_premise'])) echo htmlentities($_SESSION['$perm_premise']); ?>"/>
                                </span></td>
                          </tr>
                              <tr> 
                                <td height="17" bgcolor=""><span
                              class="style10">&nbsp;&nbsp;Road/Street/Lane/Post 
                                  &nbsp;&nbsp;Office </span></td>
  <td height="17" bgcolor=""><span
                              class="style10"> 
                                  <input
                              class="forbuttonfield" maxlength="50" size="25"
                              name="perm_street"  value="<? if(isset($_SESSION['$perm_street'])) echo htmlentities($_SESSION['$perm_street']); ?>"/>
                                  </span></td>
                                <td height="17" bgcolor=""><span
                              class="style10">&nbsp;Area/Locality/Taluka<font color="red">*</font></span></td>
                                <td height="17" bgcolor=""><span
                              class="style10"> 
                                  <input
                              class="forbuttonfield" maxlength="50" size="25"
                              name="perm_area"  value="<? if(isset($_SESSION['$perm_area'])) echo htmlentities($_SESSION['$perm_area']); ?>"/>
                                  </span></td>
                              </tr>
                              <tr> 
                                <td bgcolor=""><span
                              class="style10">&nbsp;&nbsp;City/District <font color="red">*</font></span></td>
                                <td height="17" bgcolor=""><span
                              class="style10"> 
                                  <input
                              class="forbuttonfield" maxlength="20" size="25"
                              name="perm_city"  value="<? if(isset($_SESSION['$perm_city'])) echo htmlentities($_SESSION['$perm_city']); ?>"/>
                                  </span></td>
                                <td bgcolor=""><span
                              class="style10">&nbsp;State<font color="red">*</font></span></td>
                                <td bgcolor=""><span
                              class="style10"> 
                                  <select class="forbuttonfield" name="perm_state" >
                                    <option value="select" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="select") echo "selected";?>>Select State</option>
                                    <option value='Andhra Pradesh' <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Andhra Pradesh") echo "selected";?> >Andhra&nbsp;Pradesh</option>
                                    <option value='Arunachal Pradesh' <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Arunachal Pradesh") echo "selected";?>>Arunachal&nbsp;Pradesh</option>
                                    <option value="Assam" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Assam") echo "selected";?>>Assam</option>
                                    <option value='Andaman and Nicobar' <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Andaman and Nicobar") echo "selected";?>>Andaman&nbsp;and&nbsp;Nicobar</option>
                                    <option value="Bihar" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Bihar") echo "selected";?>>Bihar</option>
                                    <option value="Chandigarh" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Chandigarh") echo "selected";?>>Chandigarh</option>
                                    <option value="Chhattisgarh" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Chhattisgarh") echo "selected";?>>Chattisgarh</option>
                                    <option value='Dadra And Nagar H' <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Dadra And Nagar H") echo "selected";?>>Dadra&nbsp;And&nbsp;Nagar&nbsp;H.</option>
                                    <option value='Daman and Diu' <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Daman and Diu") echo "selected";?>>Daman&nbsp;and&nbsp;Diu</option>
                                    <option value="DELHI" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="DELHI") echo "selected";?>>Delhi</option>
                                    <option value="Goa" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Goa") echo "selected";?>>Goa</option>
                                    <option value="Gujarat" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Gujarat") echo "selected";?>>Gujarat</option>
                                    <option value="Haryana" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Haryana") echo "selected";?>>Haryana</option>
                                    <option value='Himachal Pradesh' <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Himachal Pradesh") echo "selected";?>>Himachal&nbsp;Pradesh</option>
                                    <option value='Jammu and Kashmir' <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Jammu and Kashmir") echo "selected";?>>Jammu&nbsp;and&nbsp;Kashmir</option>
                                    <option value="Jharkhand" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Jharkhand") echo "selected";?>>Jharkhand</option>
                                    <option value="Karnataka" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Karnataka") echo "selected";?>>Karnataka</option>
                                    <option value="Kerala" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Kerala") echo "selected";?>>Kerala</option>
                                    <option value="Lakshadweep" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Lakshadweep") echo "selected";?>>Lakshadweep</option>
                                    <option value='Madhya Pradesh' <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Madhya Pradesh") echo "selected";?>>Madhya&nbsp;Pradesh</option>
                                    <option value="Maharashtra" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Maharashtra") echo "selected";?>>Maharashtra</option>
                                    <option value="Manipur" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Manipur") echo "selected";?>>Manipur</option>
                                    <option value="Meghalaya" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Meghalaya") echo "selected";?>>Meghalaya</option>
                                    <option value="Mizoram" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Mizoram") echo "selected";?>>Mizoram</option>
                                    <option value="Nagaland" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Nagaland") echo "selected";?>>Nagaland</option>
                                    <option value="Orissa" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Orissa") echo "selected";?>>Orissa</option>
                                    <option value="Pondicherry" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Pondicherry") echo "selected";?>>Pondicherry</option>
                                    <option value="Punjab" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Punjab") echo "selected";?>>Punjab</option>
                                    <option value="Rajasthan" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Rajasthan") echo "selected";?>>Rajasthan</option>
                                    <option value="Sikkim" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Sikkim") echo "selected";?>>Sikkim</option>
                                    <option value='Tamil Nadu' <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Tamil Nadu") echo "selected";?>>Tamil Nadu</option>
                                    <option value="Tripura" <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Tripura") echo "selected";?>>Tripura</option>
                                    <option value='Uttar Pradesh' <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Uttar Pradesh") echo "selected";?>>Uttar Pradesh</option>
                                    <option value='Uttaranchal' <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="Uttaranchal") echo "selected";?>>Uttaranchal</option>
                                    <option value='West Bengal' <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$perm_state']=="West Bengal") echo "selected";?>>West Bengal</option>
                                  </select>
                                  </span></td>
                              </tr>
                              <tr> 
                                <td width="176" bgcolor=""><span
                              class="style10">&nbsp;&nbsp;Pincode</span> <span
                              class="style10"><font color="red">*</font></span>                                  <!--span
                              class="style10">&nbsp;&nbsp;You came to know about
                              our site</span-->
                                  <span
                              class="style10"> </span></td>
                              <td width="461" height="17" bgcolor=""><span
                              class="style10"> 
          <input
                              class="forbuttonfield" maxlength="6" size="10"
                              name="perm_pincode" value="<? if(isset($_SESSION['$perm_pincode'])) echo $_SESSION['$perm_pincode']; ?>" />
                                </span></td>
                                
                <td colspan="2" bgcolor=""> <span
                              class="style10"></span></td>
                              </tr>
                              <tr> 
                                <td height="19" colspan="4" bgcolor=""><strong>&nbsp;
                                <input type="checkbox" name="perm_to_corrs" value="checkbox"  onClick="return setCorrespondenceAddress();"   />
                                Please Check the Box, if Correspondence 
                                Address is same as the Permanent Address</strong></td>
                          </tr>
                              <tr> 
                                <td bgcolor="" height="19">&nbsp;</td>
                                <td colspan="3" bgcolor=""><p><strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Correspondence 
                                    Address</strong></p>
                                </td>
                          </tr>
                              <tr> 
                                <td bgcolor="" height="19"><span
                              class="style10">&nbsp;&nbsp;Flat/Door/Block No.<font color="red">*</font></span></td>
                                <td bgcolor=""><span
                              class="style10"> 
                                  <input class="forbuttonfield" maxlength="30" size="25"
                              name="corrs_flat" value="<? if(isset($_SESSION['$corrs_flat'])) echo htmlentities($_SESSION['$corrs_flat']); ?>"/>
                                  </span></td>
                                <td bgcolor=""><span
                              class="style10">&nbsp;Name of &nbsp;Premise/Village</span></td>
                          <td bgcolor=""><span
                              class="style10"> 
                                  <input
                              class="forbuttonfield" maxlength="40" size="25"
                              name="corrs_premise" value="<? if(isset($_SESSION['$corrs_premise'])) echo htmlentities($_SESSION['$corrs_premise']); ?>" />
                                  </span></td>
                              </tr>
                              <tr> 
                                <td bgcolor="" height="19"><span
                              class="style10">&nbsp;&nbsp;Road/Street/Lane/Post 
                                  &nbsp;&nbsp;Office </span></td>
  <td bgcolor=""><span
                              class="style10"> 
                                  <input
                              class="forbuttonfield" maxlength="50" size="25"
                              name="corrs_street" value="<? if(isset($_SESSION['$corrs_street'])) echo htmlentities($_SESSION['$corrs_street']); ?>"/>
                                  </span></td>
                                <td bgcolor=""><span
                              class="style10">&nbsp;Area/Locality/Taluka</span></td>
                                <td bgcolor=""><span
                              class="style10"> 
                                  <input
                              class="forbuttonfield" maxlength="50" size="25"
                              name="corrs_area" value="<? if(isset($_SESSION['$corrs_area'])) echo htmlentities($_SESSION['$corrs_area']); ?>"/>
                                  </span></td>
                              </tr>
                              <tr> 
                                <td bgcolor="" height="19"><span
                              class="style10">&nbsp;&nbsp;City/District <font color="red">*</font></span></td>
                                <td bgcolor=""><span
                              class="style10"> 
                                  <input
                              class="forbuttonfield" maxlength="50" size="25"
                              name="corrs_city" value="<? if(isset($_SESSION['$city'])) echo htmlentities($_SESSION['$city']); ?>"/>								 
                                  </span></td>
                                <td bgcolor=""><span
                              class="style10">&nbsp;State<font color="red">*</font></span></td>
                                <td bgcolor=""><span
                              class="style10"> 
                                  <select                              class="forbuttonfield" name="corrs_state">
                                    <!--option value="select" <?php if(isset($_SESSION['$state'])) if($_SESSION['$state']=="select") echo "selected";?>>Select State</option-->
                                    <option value="select" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="select") echo "selected";?>>Select State</option>
                                    <option value='Andhra Pradesh' <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Andhra Pradesh") echo "selected";?> >Andhra&nbsp;Pradesh</option>
                                    <option value='Arunachal Pradesh' <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Arunachal Pradesh") echo "selected";?>>Arunachal&nbsp;Pradesh</option>
                                    <option value="Assam" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Assam") echo "selected";?>>Assam</option>
                                    <option value='Andaman and Nicobar' <?php if(isset($_SESSION['$perm_state'])) if($_SESSION['$corrs_state']=="Andaman and Nicobar") echo "selected";?>>Andaman&nbsp;and&nbsp;Nicobar</option>
                                    <option value="Bihar" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Bihar") echo "selected";?>>Bihar</option>
                                    <option value="Chandigarh" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Chandigarh") echo "selected";?>>Chandigarh</option>
                                    <option value="Chhattisgarh" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Chhattisgarh") echo "selected";?>>Chattisgarh</option>
                                    <option value='Dadra And Nagar H' <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Dadra And Nagar H") echo "selected";?>>Dadra&nbsp;And&nbsp;Nagar&nbsp;H.</option>
                                    <option value='Daman and Diu' <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Daman and Diu") echo "selected";?>>Daman&nbsp;and&nbsp;Diu</option>
                                    <option value="DELHI" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="DELHI") echo "selected";?>>Delhi</option>
                                    <option value="Goa" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Goa") echo "selected";?>>Goa</option>
                                    <option value="Gujarat" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Gujarat") echo "selected";?>>Gujarat</option>
                                    <option value="Haryana" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Haryana") echo "selected";?>>Haryana</option>
                                    <option value='Himachal Pradesh' <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Himachal Pradesh") echo "selected";?>>Himachal&nbsp;Pradesh</option>
                                    <option value='Jammu and Kashmir' <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Jammu and Kashmir") echo "selected";?>>Jammu&nbsp;and&nbsp;Kashmir</option>
                                    <option value="Jharkhand" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Jharkhand") echo "selected";?>>Jharkhand</option>
                                    <option value="Karnataka" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Karnataka") echo "selected";?>>Karnataka</option>
                                    <option value="Kerala" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Kerala") echo "selected";?>>Kerala</option>
                                    <option value="Lakshadweep" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Lakshadweep") echo "selected";?>>Lakshadweep</option>
                                    <option value='Madhya Pradesh' <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Madhya Pradesh") echo "selected";?>>Madhya&nbsp;Pradesh</option>
                                    <option value="Maharashtra" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Maharashtra") echo "selected";?>>Maharashtra</option>
                                    <option value="Manipur" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Manipur") echo "selected";?>>Manipur</option>
                                    <option value="Meghalaya" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Meghalaya") echo "selected";?>>Meghalaya</option>
                                    <option value="Mizoram" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Mizoram") echo "selected";?>>Mizoram</option>
                                    <option value="Nagaland" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Nagaland") echo "selected";?>>Nagaland</option>
                                    <option value="Orissa" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Orissa") echo "selected";?>>Orissa</option>
                                    <option value="Pondicherry" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Pondicherry") echo "selected";?>>Pondicherry</option>
                                    <option value="Punjab" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Punjab") echo "selected";?>>Punjab</option>
                                    <option value="Rajasthan" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Rajasthan") echo "selected";?>>Rajasthan</option>
                                    <option value="Sikkim" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Sikkim") echo "selected";?>>Sikkim</option>
                                    <option value='Tamil Nadu' <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Tamil Nadu") echo "selected";?>>Tamil Nadu</option>
                                    <option value="Tripura" <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Tripura") echo "selected";?>>Tripura</option>
                                    <option value='Uttar Pradesh' <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Uttar Pradesh") echo "selected";?>>Uttar Pradesh</option>
                                    <option value='Uttaranchal' <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="Uttaranchal") echo "selected";?>>Uttaranchal</option>
                                    <option value='West Bengal' <?php if(isset($_SESSION['$corrs_state'])) if($_SESSION['$corrs_state']=="West Bengal") echo "selected";?>>West Bengal</option>
                                  </select>
                                  </span></td>
                              </tr>
                              <tr> 
                                <td bgcolor="" height="19"><span
                              class="style10"><strong>&nbsp;</strong>&nbsp;Pincode</span> <span
                              class="style10"><font color="red">*</font></span>                                  <!--span
                              class="style10">&nbsp;&nbsp;You came to know about
                              our site</span-->                                </td>
                                <td bgcolor="" colspan="3"><span
                              class="style10"> 
                                  
                             <input  class="forbuttonfield" maxlength="6" size="10"
                              name="corrs_pincode" value="<? if(isset($_SESSION['$pincode'])) echo htmlentities($_SESSION['$pincode']); ?>"/>
                                  </span> </td>
                              </tr>
                              
                              <tr><td colspan="4">&nbsp;</td></tr>
                              <tr><td colspan="4">&nbsp;</td></tr>
                              
                              <tr><td colspan="4"><center><input type="submit"  value="Register" /></center></td></tr>
                              <tr><td colspan="4">&nbsp;</td></tr>
						 </table>
                   </form>      
</body>
</html>
