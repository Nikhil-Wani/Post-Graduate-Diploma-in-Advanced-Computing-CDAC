-- phpMyAdmin SQL Dump
-- version 3.4.9
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Nov 10, 2020 at 11:37 AM
-- Server version: 5.5.20
-- PHP Version: 5.3.9

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `lms`
--

-- --------------------------------------------------------

--
-- Table structure for table `bookmaster`
--

CREATE TABLE IF NOT EXISTS `bookmaster` (
  `bookid` int(11) NOT NULL AUTO_INCREMENT,
  `bookname` varchar(150) NOT NULL,
  `author` varchar(100) NOT NULL,
  `publisher` varchar(150) NOT NULL,
  `yearpublished` int(11) NOT NULL,
  PRIMARY KEY (`bookid`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=6 ;

--
-- Dumping data for table `bookmaster`
--

INSERT INTO `bookmaster` (`bookid`, `bookname`, `author`, `publisher`, `yearpublished`) VALUES
(1, 'Java', 'xyz', 'P12', 2002),
(2, 'OS', 'AAA', 'SSS', 1982),
(3, 'C++', 'asd', 'asdww', 1978),
(4, 'C++', 'asd', 'asdww', 1978),
(5, 'C', 'wwww', 'dddd', 2001);

-- --------------------------------------------------------

--
-- Table structure for table `userdetails`
--

CREATE TABLE IF NOT EXISTS `userdetails` (
  `useremail` varchar(80) NOT NULL,
  `userpassword` varchar(20) NOT NULL,
  `username` varchar(100) NOT NULL,
  `usermobile` varchar(10) NOT NULL,
  `categoryType` varchar(20) NOT NULL,
  PRIMARY KEY (`useremail`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `userdetails`
--

INSERT INTO `userdetails` (`useremail`, `userpassword`, `username`, `usermobile`, `categoryType`) VALUES
('abc@11.in', '12345', 'abc', '1234567890', 'ECE'),
('abc@cdac.in', 'dfgdf', 'abc', '1234567890', 'ECE'),
('admin@cdac.in', 'admin@123', 'Administrator', '1234567890', ''),
('muday@cdac.in', '12345', 'uday', '1234567890', 'ECEEEE');

-- --------------------------------------------------------

--
-- Table structure for table `userroles`
--

CREATE TABLE IF NOT EXISTS `userroles` (
  `useremail` varchar(80) NOT NULL,
  `role` tinyint(4) NOT NULL,
  UNIQUE KEY `useremail` (`useremail`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `userroles`
--

INSERT INTO `userroles` (`useremail`, `role`) VALUES
('abc@11.in', 2),
('abc@cdac.in', 2),
('admin@cdac.in', 1),
('muday@cdac.in', 2);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `userroles`
--
ALTER TABLE `userroles`
  ADD CONSTRAINT `userroles_ibfk_1` FOREIGN KEY (`useremail`) REFERENCES `userdetails` (`useremail`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
