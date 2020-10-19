-- phpMyAdmin SQL Dump
-- version 2.10.1
-- http://www.phpmyadmin.net
-- 
-- Host: localhost
-- Generation Time: Jun 16, 2009 at 09:36 PM
-- Server version: 5.0.45
-- PHP Version: 5.2.5

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";

-- 
-- Database: `upload_db`
-- 

-- --------------------------------------------------------

-- 
-- Table structure for table `emp`
-- 

CREATE TABLE `emp` (
  `empno` int(11) NOT NULL auto_increment,
  `ename` varchar(100) collate utf8_unicode_ci NOT NULL,
  `job` varchar(100) collate utf8_unicode_ci NOT NULL,
  `sal` float NOT NULL,
  PRIMARY KEY  (`empno`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci AUTO_INCREMENT=9809 ;

-- 
-- Dumping data for table `emp`
-- 

INSERT INTO `emp` (`empno`, `ename`, `job`, `sal`) VALUES 
(1221, 'Sukanya', 'PRESIDENT', 780000),
(1231, 'Ritu', 'MANAGER', 340000),
(7801, 'Jason', 'SALESMEN', 14234.6),
(7802, 'Alison', 'SALESMEN', 16661.8),
(7803, 'James', 'MANAGER', 456545),
(7804, 'Celia', 'MANAGER', 452345),
(7805, 'Robert', 'SALESMEN', 22334.8),
(7806, 'Linda', 'ANALYST', 124323),
(7808, 'James', 'ANALYST', 1232.78),
(9800, 'Jane', 'CLERK', 103422),
(9801, 'Lizzie', 'CLERK', 123422),
(9803, 'Rahul', 'MANAGER', 452342),
(9804, 'Shruti', 'ANAYLST', 223422);
