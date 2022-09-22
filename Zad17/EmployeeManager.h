#pragma once
#include <vector>
#include <memory>
#include <map>
#include <set>
#include <algorithm>
#include <iostream>
#include "Employee.h"
#include "EmployeeReader.h"
#include "EmployeeWriter.h"
class EmployeeManager
{
	std::vector<Employee> employees;
	std::shared_ptr<EmployeeReader> _fileReader;
	std::shared_ptr<EmployeeWriter> _fileWriter;
	std::map<std::string, std::string> credentials;
public:
	EmployeeManager(std::shared_ptr <EmployeeReader> fileReader, std::shared_ptr <EmployeeWriter> fileWriter);
	void readDataFromFile(std::string filePath);
	void generateLogin();
	void generatePassword();
	void saveToFile(std::string filePath);
	int calculateFirstNameStarting(char firstLetter);
	std::set<std::string> calculateUniqueNames();
};

