-- phpMyAdmin SQL Dump
-- version 2.10.1
-- http://www.phpmyadmin.net
-- 
-- Host: localhost
-- Generation Time: Apr 13, 2011 at 09:29 AM
-- Server version: 5.0.45
-- PHP Version: 5.2.5

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";

-- 
-- Database: `test`
-- 

-- --------------------------------------------------------

-- 
-- Table structure for table `test_mysql`
-- 

CREATE TABLE `test_mysql` (
  `id` int(4) NOT NULL auto_increment,
  `name` varchar(65) NOT NULL default '',
  `lastname` varchar(65) NOT NULL default '',
  `email` varchar(65) NOT NULL default '',
  PRIMARY KEY  (`id`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=13 ;

-- 
-- Dumping data for table `test_mysql`
-- 

INSERT INTO `test_mysql` (`id`, `name`, `lastname`, `email`) VALUES 
(1, 'Billly', 'Blueton', 'bb5@phpeasystep.com'),
(2, 'Jame', 'Campbell', 'jame@somewhere.com'),
(3, 'Mark', 'Jackson', 'mark@phpeasystep.com'),
(4, 'Linda', 'Travor', 'lin65@phpeasystep.com'),
(9, 'testdata', 'testdata', 'testdata@testdata.com'),
(11, 'cdac', 'cdac', 'test@cdac.in');
