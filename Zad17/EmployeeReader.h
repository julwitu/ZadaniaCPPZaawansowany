#pragma once
#include "Employee.h"
#include <vector>

class EmployeeReader 
{
public:
	virtual std::vector<Employee> readEmployees(std::string filePath) = 0;
};

