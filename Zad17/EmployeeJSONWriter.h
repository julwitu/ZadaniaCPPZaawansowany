#pragma once
#include "EmployeeWriter.h"
class EmployeeJSONWriter : public EmployeeWriter
{
public:
	void writeEmployees(std::vector<Employee> employees, std::string filePath) override;
};

