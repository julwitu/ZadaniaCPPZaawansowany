#include "EmployeeCSVReader.h"
#include "Employee.h"
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

double EmployeeCSVReader::stringToDouble(std::string str) {
	return std::stod(str);
}

Employee::Gender EmployeeCSVReader::stringToEnum(std::string str) {
	if (str == "female") {
		return Employee::Gender::FEMALE;
	}
	else if (str == "male") {
		return Employee::Gender::MALE;
	}
	else {
		return Employee::Gender::UNKNOWN;
	}
}
std::vector<Employee> EmployeeCSVReader::readEmployees(std::string filePath) //wewnatrz tej funkcji mozemy sobie tez od razu tymczasowo utworzyc wszystkie zmienne do oblsugi plikow
{
	std::vector <Employee> employees;
	std::ifstream _filestream(filePath);
	std::string firstName;
	std::string lastName;
	std::string email;
	std::string gender;
	std::string salary;
	
	if (!_filestream.is_open()) {
		std::cout << "Nie udalo sie wczytac z pliku" << std::endl;
		return employees;
	}

	std::string firstLine;
	std::getline(_filestream, firstLine);
	while (std::getline(_filestream, firstName, ',')) {
		std::getline(_filestream, lastName, ',');
		std::getline(_filestream, email, ',');
		std::getline(_filestream, gender, ',');
		std::getline(_filestream, salary);
		Employee::Gender g = stringToEnum(gender);
			double s = stringToDouble(salary);
		employees.emplace_back(firstName, lastName, email, g, s);
	}
	_filestream.close();
	return employees;
}
