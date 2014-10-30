/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 3 Lab
  Program Description: This lab creates a program that instantiates
  2 employee objects from the Employee class.  Updated to include static variable in class
  and 2 new setters for dependents and annualSalary.*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Employee.h"

//function prototypes from Basic UI program week1
void DisplayApplicationInformation();
void DisplayDivider(string outputTitle);
string GetInput(string inputType);
void TerminateApplication();

//initialize static variable numEmployees to 0.
int Employee::numEmployees = 0;

int main()
{
DisplayApplicationInformation();

	Employee employee1; //instantiate employee1 object using default constructor.
	
	DisplayDivider("Employee 1");

	//This section prompts for user input
	string firstName = GetInput("first name");
	employee1.setFirstName(firstName);

	string lastName = GetInput("last name");
	employee1.setLastName(lastName);

	string gender = GetInput("gender");
	char firstCharacterGender = gender[0]; //takes value of gender, places in array, and assigns first charcter to char firstCharacterGender.
	employee1.setGender(firstCharacterGender);

	string dependents = GetInput("dependents");
	employee1.setDependents(dependents); //used new setter that accepts string

	string annualSalary = GetInput("annual salary");
	employee1.setAnnualSalary(annualSalary); //used new setter that accepts string

	employee1.displayEmployee();
	
	cout << "----Number of Employee Objects Created----" << endl;
	cout << "Number of Employees: " << Employee::getNumEmployees() << endl; //getNumEmployees called using class name.

	//This section uses multi-arg constructor to set values for employee2 object.
	Employee employee2("Mary", "Noia", 'F', 5, 24000.00);

	DisplayDivider("Employee 2");
	employee2.displayEmployee();

	cout << "----Number of Employee Objects Created----" << endl;
	cout << "Number of Employees: " << Employee::getNumEmployees() << endl; //getNumEmployees called using class name.


	TerminateApplication();

return 0;
}

//functions defined from Basic UI week 1 lab.
void DisplayApplicationInformation()
{
	cout << "Welcome to the Employee Class Test Program." << endl;
	cout << "CIS247C, Week 3 Lab." << endl;
	cout << "Name: Steven Bennett" << endl;
	cout << "This program has been updated to include static variable in Employee class and 2 new setters for dependents and annualSalary." << endl;
}

void DisplayDivider(string outputTitle)
{
	cout << '\n' << "****************** " + outputTitle + " *******************" << endl;
}

string GetInput(string inputType)
{
	cout << "Please enter " + inputType + ": ";
	string strInput;
	getline(cin, strInput);

	return strInput;
}

void TerminateApplication()
{
	cout <<'\n' << "Thank you for using the application!" << endl;
}