/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 3 Lab
  Program Description: This lab creates a program that instantiates
  2 employee objects from the Employee class. Updated to include static variable in class
  and 2 new setters for dependents and annualSalary.*/

using namespace std;
#ifndef EMPLOYEE_H //inclusion guard
#define EMPLOYEE_H

class Employee
{
private: //private attributes
	string firstName;
	string lastName;
	char gender;
	int dependents;
	double annualSalary;
	static int numEmployees; //static variable keeps count of total number of employees.

public: //member functions
	Employee(); //default constructor
	Employee(string first, string last, char gen, int dep, double salary); //multi-arg constructor
	double calculatePay();
	void displayEmployee();
	string getFirstName();
	void setFirstName(string first);
	string getLastName();
	void setLastName(string last);
	char getGender();
	void setGender(char gen);
	int getDependents();
	void setDependents(int dep);
	void setDependents(string dep);
	double getAnnualSalary();
	void setAnnualSalary(double salary);
	void setAnnualSalary(string salary);
	static int getNumEmployees();
};

#endif