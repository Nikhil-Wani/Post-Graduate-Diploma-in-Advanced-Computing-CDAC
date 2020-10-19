<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Date Functions</title>
</head>
<? 
echo "Format Year-month number-date :".Date('Y-m-d');
echo "<br/>".Date('Y-M-d');
echo "<br/>".date('y-m-d h:i:s');
echo "<br/>".date('Y-m-dS H:i:s'); //H for Hourly (24 Hours Like Railway time)
//$datedisplay=date("l, F m, Y");//l for Day name
								//m Month name
echo "<br/>-->".$datedisplay;

echo "<br/><br/><br/>";
print_r(getDate());
$array=getDate();

echo "<br/>Month :".$array['month'];

echo "<br/><br/>";
echo gmdate("l") . "<br>";
echo gmdate("j")."<br/>";

// Prints the day, date, month, year, time, AM or PM
echo date("l jS \of F Y h:i:s A") . "<br>";

echo date("l jS \of F Y H:i:s A") . "<br>";

echo "----------------------------<BR/>";


echo gmdate("l jS \of F Y h:i:s A") . "<br>";
echo date("l jS \of F Y h:i:s A") . "<br>";


echo "<BR/>";
echo date('Z')+time();
echo "<br/>";
echo gmdate("l jS \of F Y h:i:s A",time()+date('Z'));


/*
Required. Specifies the format of the outputted date string. The following characters can be used:
d - The day of the month (from 01 to 31)
D - A textual representation of a day (three letters)
j - The day of the month without leading zeros (1 to 31)
l (lowercase 'L') - A full textual representation of a day
N - The ISO-8601 numeric representation of a day (1 for Monday, 7 for Sunday)
S - The English ordinal suffix for the day of the month (2 characters st, nd, rd or th. Works well with j)
w - A numeric representation of the day (0 for Sunday, 6 for Saturday)
z - The day of the year (from 0 through 365)
W - The ISO-8601 week number of year (weeks starting on Monday)
F - A full textual representation of a month (January through December)
m - A numeric representation of a month (from 01 to 12)
M - A short textual representation of a month (three letters)
n - A numeric representation of a month, without leading zeros (1 to 12)
t - The number of days in the given month
L - Whether it's a leap year (1 if it is a leap year, 0 otherwise)
o - The ISO-8601 year number
Y - A four digit representation of a year
y - A two digit representation of a year
a - Lowercase am or pm
A - Uppercase AM or PM
B - Swatch Internet time (000 to 999)
g - 12-hour format of an hour (1 to 12)
G - 24-hour format of an hour (0 to 23)
h - 12-hour format of an hour (01 to 12)
H - 24-hour format of an hour (00 to 23)
i - Minutes with leading zeros (00 to 59)
s - Seconds, with leading zeros (00 to 59)
u - Microseconds (added in PHP 5.2.2)
e - The timezone identifier (Examples: UTC, GMT, Atlantic/Azores)
I (capital i) - Whether the date is in daylights savings time (1 if Daylight Savings Time, 0 otherwise)
O - Difference to Greenwich time (GMT) in hours (Example: +0100)
P - Difference to Greenwich time (GMT) in hours:minutes (added in PHP 5.1.3)
T - Timezone abbreviations (Examples: EST, MDT)
Z - Timezone offset in seconds. The offset for timezones west of UTC is negative (-43200 to 50400)
c - The ISO-8601 date (e.g. 2013-05-05T16:34:42+00:00)
r - The RFC 2822 formatted date (e.g. Fri, 12 Apr 2013 12:01:05 +0200)
U - The seconds since the Unix Epoch (January 1 1970 00:00:00 GMT)

*/



?>
<body>
</body>
</html>
