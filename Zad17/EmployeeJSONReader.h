#pragma once
#include <vector>
#include "Employee.h"
#include "EmployeeReader.h"
class EmployeeJSONReader : public EmployeeReader
{
public:
	std::vector<Employee> readEmployees(std::string filePath) override;
};

